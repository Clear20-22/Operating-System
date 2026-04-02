/* Serial interface for raw TCP and AF_LOCAL connections on Un*x like systems.

   Copyright (C) 1992, 1993, 1994, 1995, 1996, 1998, 1999, 2001, 2005, 2006
   Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

#include "defs.h"
#include "serial.h"
#include "ser-base.h"
#include "ser-tcp.h"

#include <sys/types.h>

#ifdef HAVE_SYS_FILIO_H
#include <sys/filio.h>  /* For FIONBIO. */
#endif
#ifdef HAVE_SYS_IOCTL_H
#include <sys/ioctl.h>  /* For FIONBIO. */
#endif

#include <sys/time.h>

#ifdef USE_WIN32API
#include <winsock2.h>
#define ETIMEDOUT WSAETIMEDOUT
#define close(fd) closesocket (fd)
#define ioctl ioctlsocket
#else
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/tcp.h>
#endif

#ifdef HAVE_SYS_UN_H
#define _GNU_SOURCE
#define _XOPEN_SOURCE_EXTENDED	/* Apparently required on DEC/OSF. */
#include <sys/un.h>		/* For struct sockaddr_un. */
#ifndef SUN_LEN
/* some systems (e.g., Solaris) don't define this handy macro */
#define SUN_LEN(sau) \
  (sizeof(*(sau)) - sizeof((sau)->sun_path) + strlen((sau)->sun_path))
#endif
#endif /* HAVE_SYS_UN_H */

#include <signal.h>
#include "gdb_string.h"

#ifndef HAVE_SOCKLEN_T
typedef int socklen_t;
#endif

void _initialize_ser_tcp (void);

/* seconds to wait for connect */
#define TIMEOUT 15
/* how many times per second to poll deprecated_ui_loop_hook */
#define POLL_INTERVAL 2

/* Open a tcp socket */

int
net_open (struct serial *scb, const char *name)
{
  char *port_str, hostname[100];
  int n, port, tmp;
  enum { USE_TCP, USE_UDP, USE_LOCAL } mode;
  struct hostent *hostent;
  struct sockaddr_in sockaddri;
  struct sockaddr *sockaddrp;
  socklen_t socklen;
#ifdef HAVE_SYS_UN_H
  struct sockaddr_un sockaddru;
#endif
#ifdef USE_WIN32API
  u_long ioarg;
#else
  int ioarg;
#endif

  mode =  USE_TCP;
  if (strncmp (name, "udp:", 4) == 0)
    {
      mode = USE_UDP;
      name = name + 4;
    }
  else if (strncmp (name, "tcp:", 4) == 0)
    name = name + 4;
  else if (strncmp (name, "unix:", 5) == 0)
    {
      mode = USE_LOCAL;
      name = name + 5;
    }
  else if (strncmp (name, "local:", 6) == 0)
    {
      mode = USE_LOCAL;
      name = name + 6;
    }

  if (mode == USE_TCP || mode == USE_UDP)
    {
      port_str = strchr (name, ':');
      port_str = strchr (name, ':');

      if (!port_str)
        error (_("net_open: No colon in host name!"));	   /* Shouldn't ever happen */

      tmp = min (port_str - name, (int) sizeof hostname - 1);
      strncpy (hostname, name, tmp);	/* Don't want colon */
      hostname[tmp] = '\000';	/* Tie off host name */
      port = atoi (port_str + 1);

      /* default hostname is localhost */
      if (!hostname[0])
        strcpy (hostname, "localhost");

      hostent = gethostbyname (hostname);
      if (!hostent)
        {
          fprintf_unfiltered (gdb_stderr, "%s: unknown host\n", hostname);
          errno = ENOENT;
          return -1;
        }
      sockaddri.sin_family = AF_INET;
      sockaddri.sin_port = htons (port);
      memcpy (&sockaddri.sin_addr.s_addr, hostent->h_addr,
	      sizeof (struct in_addr));
      socklen = sizeof(struct sockaddr_in);
      sockaddrp = (struct sockaddr *)&sockaddri;
    }
  else if (mode == USE_LOCAL)
    {
#ifdef HAVE_SYS_UN_H
      if (strlen(name) >= sizeof(sockaddru.sun_path))
	{
	  fprintf_unfiltered (gdb_stderr, "%s: name too long\n", name);
	  errno = EINVAL;
	  return -1;
	}

      sockaddru.sun_family = AF_UNIX;
      strcpy(sockaddru.sun_path, name);
      socklen = SUN_LEN(&sockaddru);
#ifdef HAVE_STRUCT_SOCKADDR_UN_SUN_LEN
      sockaddru.sun_len = socklen;
#endif
      sockaddrp = (struct sockaddr *)&sockaddru;
#else
      fprintf_unfiltered (gdb_stderr, "%s: socket type not supported\n", name);
      errno = EINVAL;
      return -1;
#endif /* HAVE_SYS_UN_H */
    }
  else
    error ("net_open: invalid mode!");

  switch (mode) {
  case USE_UDP: 
    scb->fd = socket (PF_INET, SOCK_DGRAM, 0);
    break;
  case USE_TCP:
    scb->fd = socket (PF_INET, SOCK_STREAM, 0);
    break;
  case USE_LOCAL:
    scb->fd = socket (PF_UNIX, SOCK_STREAM, 0);
    break;
  }
  if (scb->fd < 0)
    return -1;
  
  /* set socket nonblocking */
  ioarg = 1;
  ioctl (scb->fd, FIONBIO, &ioarg);

  /* Use Non-blocking connect.  connect() will return 0 if connected already. */
  n = connect (scb->fd, sockaddrp, socklen);

  if (n < 0
#ifdef USE_WIN32API
      /* Under Windows, calling "connect" with a non-blocking socket
	 results in WSAEWOULDBLOCK, not WSAEINPROGRESS.  */
      && WSAGetLastError() != WSAEWOULDBLOCK
#else
      && errno != EINPROGRESS
#endif
      )
    {
#ifdef USE_WIN32API
      errno = WSAGetLastError();
#endif
      net_close (scb);
      return -1;
    }

  if (n)
    {
      /* looks like we need to wait for the connect */
      struct timeval t;
      fd_set rset, wset, eset;
      int polls = 0;
      FD_ZERO (&rset);

      do 
	{
	  /* While we wait for the connect to complete, 
	     poll the UI so it can update or the user can 
	     interrupt.  */
	  if (deprecated_ui_loop_hook)
	    {
	      if (deprecated_ui_loop_hook (0))
		{
		  errno = EINTR;
		  net_close (scb);
		  return -1;
		}
	    }
	  
	  FD_SET (scb->fd, &rset);
	  wset = rset;
	  eset = rset;
	  t.tv_sec = 0;
	  t.tv_usec = 1000000 / POLL_INTERVAL;
	  
	  /* POSIX systems return connection success or failure by signalling
	     wset.  Windows systems return success in wset and failure in
	     eset.

	     We must call select here, rather than gdb_select, because
	     the serial structure has not yet been initialized - the
	     MinGW select wrapper will not know that this FD refers
	     to a socket.  */
	  n = select (scb->fd + 1, &rset, &wset, &eset, &t);
	  polls++;
	} 
      while (n == 0 && polls <= TIMEOUT * POLL_INTERVAL);
      if (n < 0 || polls > TIMEOUT * POLL_INTERVAL)
	{
	  if (polls > TIMEOUT * POLL_INTERVAL)
	    errno = ETIMEDOUT;
	  net_close (scb);
	  return -1;
	}
    }

  /* Got something.  Is it an error? */
  {
    int res, err;
    socklen_t len;
    len = sizeof (err);
    /* On Windows, the fourth parameter to getsockopt is a "char *";
       on UNIX systems it is generally "void *".  The cast to "void *"
       is OK everywhere, since in C "void *" can be implicitly
       converted to any pointer type.  */
    res = getsockopt (scb->fd, SOL_SOCKET, SO_ERROR, (void *) &err, &len);
    if (res < 0 || err)
      {
	if (err)
	  errno = err;
	net_close (scb);
	return -1;
      }
  } 

  /* turn off nonblocking */
  ioarg = 0;
  ioctl (scb->fd, FIONBIO, &ioarg);

  if (mode == USE_TCP)
    {
      /* Disable Nagle algorithm. Needed in some cases. */
      tmp = 1;
      setsockopt (scb->fd, IPPROTO_TCP, TCP_NODELAY,
		  (char *)&tmp, sizeof (tmp));
    }

#ifdef SIGPIPE
  /* If we don't do this, then GDB simply exits
     when the remote side dies.  */
  signal (SIGPIPE, SIG_IGN);
#endif

  return 0;
}

void
net_close (struct serial *scb)
{
  if (scb->fd < 0)
    return;

  close (scb->fd);
  scb->fd = -1;
}

int
net_read_prim (struct serial *scb, size_t count)
{
  return recv (scb->fd, scb->buf, count, 0);
}

int
net_write_prim (struct serial *scb, const void *buf, size_t count)
{
  return send (scb->fd, buf, count, 0);
}

void
_initialize_ser_tcp (void)
{
#ifdef USE_WIN32API
  /* Do nothing; the TCP serial operations will be initialized in
     ser-mingw.c.  */
  return;
#else
  struct serial_ops *ops;
  ops = XMALLOC (struct serial_ops);
  memset (ops, 0, sizeof (struct serial_ops));
  ops->name = "tcp";
  ops->next = 0;
  ops->open = net_open;
  ops->close = net_close;
  ops->readchar = ser_base_readchar;
  ops->write = ser_base_write;
  ops->flush_output = ser_base_flush_output;
  ops->flush_input = ser_base_flush_input;
  ops->send_break = ser_base_send_break;
  ops->go_raw = ser_base_raw;
  ops->get_tty_state = ser_base_get_tty_state;
  ops->set_tty_state = ser_base_set_tty_state;
  ops->print_tty_state = ser_base_print_tty_state;
  ops->noflush_set_tty_state = ser_base_noflush_set_tty_state;
  ops->setbaudrate = ser_base_setbaudrate;
  ops->setstopbits = ser_base_setstopbits;
  ops->drain_output = ser_base_drain_output;
  ops->async = ser_base_async;
  ops->read_prim = net_read_prim;
  ops->write_prim = net_write_prim;
  serial_add_interface (ops);
#endif /* USE_WIN32API */
}
