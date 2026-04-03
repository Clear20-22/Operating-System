#include <sys/types.h>
#include <sys/stat.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include "config.h"

#include "onsel.h"
#include "console.h"
#include "main.h"
#include "trace.h"

const char rcsid_console_c[] = 
  "$Id: console.c,v 1.10 2002/09/10 20:35:32 dholland Exp $";

/*
 * Console I/O driver module.
 *
 * This file supports four separate channels:
 *     1. Input for the simulated system console (dev_serial.c or equivalent)
 *     2. Output from the simulated system console.
 *     3. Internally generated message output.
 *     4. Trace output.
 *
 * Input can come from stdin, or (in the FUTURE) from a script file
 * that has timed keystroke events. stdin may be a tty, a file, or a
 * pipe; even if it is a tty we need to accept characters arriving at
 * high speed to allow window-system pastes.
 *
 * By default the system console is connected to stdout, messages go
 * to stderr, and tracing (if any) also goes to stderr, all of which
 * is the tty.
 *
 * Since tracing can be voluminous, it is possible to send trace
 * messages to a file, or even (FUTURE) through a pipe to gzip. For
 * maximum utility of such logs, messages are also repeated there, and
 * console output is presented in a schematic format.
 */

/*****************************************/

typedef enum {
	MT_CONSOLE,
	MT_MSG,
	MT_CPUTRACE,
	MT_HWTRACE,
} msgtypes;

struct output {
	int is_tty;
#ifdef USE_TRACE
	FILE *f;
#else
	int fd;
#endif
	int needs_close;
	int needs_crs;

	int at_bol;
	msgtypes last_msgtype;
	unsigned last_cpunum;
};

static struct output *o_stdout;
static struct output *o_stderr;

#ifdef USE_TRACE
static struct output *o_tracefile;
static struct output *trace_to;		/* may be any the three o_* */
#endif

static struct termios tty_savetios;
static int tty_fd = -1;

static int console_up=0;

static void (*onkey)(void *data, int ch);
static void *onkeydata;

#ifdef UW
extern int hang_waiting;
#endif /* UW */

////////////////////////////////////////////////////////////
//
// Forward decls
//

static int console_sel(void *unused);

////////////////////////////////////////////////////////////
//
// Methods for struct output
//

#ifndef USE_TRACE
static
size_t
dowrite(int fd, const char *buf, size_t len)
{
	int r;
	r = write(fd, buf, len);
	if (r<=0) {
		static int evil = 0;
		const char *errmsg;

		errmsg = (r==0) ? "zero-length write" : strerror(errno);
		if (evil < 1) {
			evil++;
			msg("write: %s", errmsg);
		}
		if (evil < 2) {
			evil++;
			console_cleanup();
		}
		exit(1);
	}
	return (unsigned) r;
}

static
void
writestr(int fd, const char *buf, size_t len)
{
	size_t tot = 0;
	while (tot < len) {
		tot += dowrite(fd, buf+tot, len-tot);
	}
}
#endif /* not USE_TRACE */

static
void
output_putc(struct output *o, int c)
{
#ifdef USE_TRACE
	fputc(c, o->f);
#else
	char ch = c;
	writestr(o->fd, &ch, 1);
#endif
}

static
void
output_vsay(struct output *o, const char *fmt, va_list ap)
{
#ifdef USE_TRACE
	vfprintf(o->f, fmt, ap);
#else
	char buf[4096];
	vsnprintf(buf, sizeof(buf), fmt, ap);
	writestr(o->fd, buf, strlen(buf));
#endif
}

static
void
output_say(struct output *o, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vsay(o, fmt, ap);
	va_end(ap);
}

static
void
output_eol(struct output *o)
{
	if (o->needs_crs) {
		output_putc(o, '\r');
	}
	output_putc(o, '\n');
	o->at_bol = 1;
}

/*
 * Output a message, without an implicit newline, va_list-style.
 *
 * Use message type MT. If MT is not MT_TRACE, cpunum should always be 0.
 */
static
void
output_vmsgl(msgtypes mt, unsigned cpunum,
	     struct output *o, const char *fmt, va_list ap)
{
	if (!o->at_bol &&
	    (o->last_msgtype != mt || cpunum != o->last_cpunum)) {
		output_eol(o);
	}
	if (o->at_bol) {
		switch (mt) {
		    case MT_CONSOLE:
			output_say(o, "console: ");
			break;
		    case MT_MSG:
			output_say(o, "sys161: ");
			break;
		    case MT_CPUTRACE:
			output_say(o, "trace: %02x ", cpunum);
			break;
		    case MT_HWTRACE:
			output_say(o, "trace: -- ");
			break;
		}
	}
	output_vsay(o, fmt, ap);
	o->at_bol = 0;
	o->last_msgtype = mt;
	o->last_cpunum = cpunum;
}

static
void
output_vmsg(msgtypes mt, unsigned cpunum,
	    struct output *o, const char *fmt, va_list ap)
{
	output_vmsgl(mt, cpunum, o, fmt, ap);
	output_eol(o);
}

#ifdef USE_TRACE
static
void
output_msg(msgtypes mt, unsigned cpunum,
	   struct output *o, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vmsg(mt, cpunum, o, fmt, ap);
	va_end(ap);
}
#endif

////////////////////////////////////////////////////////////
//
// Setup and shutdown code
//

static
struct output *
make_fd_output(FILE *f)
{
	struct output *o;

	o = malloc(sizeof(struct output));
	if (o==NULL) {
		fprintf(stderr, "malloc: Out of memory\n");
		exit(1);
	}
	o->is_tty = isatty(fileno(f));
#ifdef USE_TRACE
	o->f = f;
#else
	o->fd = fileno(f);
#endif
	o->needs_close = 0;
	o->needs_crs = o->is_tty;
	o->at_bol = 1;
	o->last_msgtype = MT_MSG;
	o->last_cpunum = 0;
	return o;
}

void
console_earlyinit(void)
{
	struct stat stdout_stat, stderr_stat;

	if (fstat(STDOUT_FILENO, &stdout_stat)) {
		fprintf(stderr, "fstat stdout: %s\n", strerror(errno));
		exit(1);
	}
	if (fstat(STDERR_FILENO, &stderr_stat)) {
		fprintf(stderr, "fstat stderr: %s\n", strerror(errno));
		exit(1);
	}

	o_stdout = make_fd_output(stdout);

	if (stdout_stat.st_dev == stderr_stat.st_dev &&
	    stdout_stat.st_ino == stderr_stat.st_ino) {
		/* same object */
		o_stderr = NULL;
	}
	else {
		o_stderr = make_fd_output(stderr);
	}
	
#ifdef USE_TRACE
	o_tracefile = NULL;
	if (o_stderr != NULL) {
		trace_to = o_stderr;
	}
	else {
		trace_to = o_stdout;
	}
#endif
}

static
void
output_flush(struct output *o)
{
	if (!o->at_bol) {
		output_eol(o);
	}
#ifdef USE_TRACE
	if (o->f != NULL) {
		fflush(o->f);
	}
#endif
}

static
void
console_latecleanup(void)
{
#ifdef USE_TRACE
	if (o_tracefile && o_tracefile->f) {
		fflush(o_tracefile->f);
		if (o_tracefile->needs_close) {
			fclose(o_tracefile->f);
			o_tracefile->f = NULL;
		}
		free(o_tracefile);
		o_tracefile = NULL;
		trace_to = o_stderr ? o_stderr : o_stdout;
	}
#endif
}

#ifdef USE_TRACE
/* only useful when tracing to a file */
static
void
console_sig(int sig)
{
	static int evil=0;
	if (evil==0) {
		evil = 1;	// protect against recursive invocation
		if (o_tracefile && o_tracefile->f) {
			fflush(o_tracefile->f);
		}
	}
	signal(sig, SIG_DFL);
	raise(sig);
}
#endif

/*****************************************/

static
void
tty_init(int tty_traps_signals)
{
	struct termios tios;

	if (tcgetattr(STDIN_FILENO, &tty_savetios)==0) {
		tty_fd = STDIN_FILENO;
		goto config;
	}
	if (tcgetattr(STDOUT_FILENO, &tty_savetios)==0) {
		tty_fd = STDOUT_FILENO;
		goto config;
	}
	if (tcgetattr(STDERR_FILENO, &tty_savetios)==0) {
		tty_fd = STDERR_FILENO;
		goto config;
	}
	return;
 config:
	tios = tty_savetios;

#ifdef XCASE
	tios.c_lflag &= ~XCASE;
#endif
	tios.c_lflag &= ~(ECHONL|NOFLSH);
	tios.c_lflag &= ~(ICANON|ECHO);
	if (tty_traps_signals) {
		tios.c_lflag |= ISIG;
	}
	else {
		tios.c_lflag &= ~ISIG;
	}
	tios.c_iflag &= ~(ICRNL|INLCR);
	tios.c_cflag |= CREAD;
	tios.c_cc[VTIME] = 0;
	tios.c_cc[VMIN] = 0;

	tcsetattr(tty_fd, TCSADRAIN, &tios);
}

static
void
tty_cleanup(void)
{
	if (tty_fd >= 0) {
		tcsetattr(tty_fd, TCSADRAIN, &tty_savetios);
	}
}

/*****************************************/

void
console_init(int pass_signals)
{
	if (console_up) {
		smoke("Multiple calls to console_init");
	}

#ifdef USE_TRACE
	/* On fatal signals, try to fflush the trace file before croaking */
	signal(SIGHUP, console_sig);
	signal(SIGINT, console_sig);
	signal(SIGQUIT, console_sig);
	signal(SIGILL, console_sig);
	signal(SIGABRT, console_sig);
	signal(SIGFPE, console_sig);
	signal(SIGKILL, console_sig);	// won't work, but try anyway
	signal(SIGBUS, console_sig);
	signal(SIGSEGV, console_sig);
	signal(SIGPIPE, console_sig);
	signal(SIGALRM, console_sig);
	signal(SIGTERM, console_sig);
	signal(SIGURG, console_sig);
	signal(SIGUSR1, console_sig);
	signal(SIGUSR2, console_sig);
#ifdef SIGXCPU
	signal(SIGXCPU, console_sig);
#endif
#ifdef SIGXFSZ
	signal(SIGXFSZ, console_sig);
#endif
#ifdef SIGVTALRM
	signal(SIGVTALRM, console_sig);
#endif
#ifdef SIGPROF
	signal(SIGPROF, console_sig);
#endif
#ifdef SIGPWR
	signal(SIGPWR, console_sig);
#endif
#endif /* USE_TRACE */

	tty_init(!pass_signals);
	onselect(STDIN_FILENO, NULL, console_sel, NULL);
	console_up = 1;
}

void
console_cleanup(void)
{
	output_flush(o_stdout);
	if (o_stderr != NULL) {
		output_flush(o_stderr);
	}
#ifdef USE_TRACE
	if (o_tracefile != NULL) {
		output_flush(o_tracefile);
	}
#endif
	tty_cleanup();
	if (console_up) {
		console_up = 0;
	}
	console_latecleanup();
}

////////////////////////////////////////////////////////////
//
// Run-time I/O code
//

/*
 * Output
 */

void
console_putc(int c)
{
	output_putc(o_stdout, c);
#ifdef USE_TRACE
	if (o_tracefile) {
		char tmp[4];
		int ix=0;
		if ((c >= 32 && c<127)||(c>=32+128 && c<255)) {
			tmp[ix++] = c;
		}
		else {
			tmp[ix++] = '\\';
			switch (c) {
			    case '\a': tmp[ix++]='a'; break; 
			    case '\b': tmp[ix++]='b'; break; 
			    case '\t': tmp[ix++]='t'; break; 
			    case '\n': tmp[ix++]='n'; break; 
			    case '\v': tmp[ix++]='v'; break; 
			    case '\f': tmp[ix++]='f'; break; 
			    case '\r': tmp[ix++]='r'; break; 
			    default:
				snprintf(tmp+ix, 2, "%02x", c);
				ix+=2;
				break;
			}
		}
		tmp[ix++] = 0;
		output_msg(MT_CONSOLE, 0, o_tracefile, 
			   "`%s' (%d / 0x%x)", tmp, c, c);
	}
	fflush(o_stdout->f);
#endif
}

void
console_beep(void)
{
	if (o_stdout->is_tty) {
		console_putc('\a');
#ifdef USE_TRACE
		if (o_tracefile) {
			output_msg(MT_MSG, 0, o_tracefile, "[BEEP]");
		}
#endif
	}
	else {
		msg("[BEEP]");
	}
}

/*****************************************/

void
die(void)
{
	console_cleanup();
	exit(1);
}

void
msg(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vmsg(MT_MSG, 0, o_stderr ? o_stderr : o_stdout, fmt, ap);
	va_end(ap);
}

void
msgl(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vmsgl(MT_MSG, 0, o_stderr ? o_stderr : o_stdout, fmt, ap);
	va_end(ap);
}

#ifdef USE_TRACE

void
set_tracefile(const char *filename)
{
	if (o_tracefile != NULL) {
		smoke("Multiple calls to set_tracefile");
	}

	if (filename && !strcmp(filename, "-")) {
		trace_to = o_stdout;
		return;
	}
	else if (filename) {
		o_tracefile = malloc(sizeof(struct output));
		if (o_tracefile==NULL) {
			msg("malloc: out of memory");
			die();
		}
		o_tracefile->f = fopen(filename, "w");
		if (o_tracefile->f==NULL) {
			msg("Cannot open tracefile %s: %s", 
			    filename, strerror(errno));
			die();
		}
		o_tracefile->is_tty = 0;
		o_tracefile->needs_close = 1;
		o_tracefile->needs_crs = 0;
		o_tracefile->at_bol = 1;
		o_tracefile->last_msgtype = MT_HWTRACE;
		o_tracefile->last_cpunum = 0;
		trace_to = o_tracefile;
	}
	else {
		trace_to = o_stderr ? o_stderr : o_stdout;
	}
}

void
cputrace(unsigned cpunum, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vmsg(MT_CPUTRACE, cpunum, trace_to, fmt, ap);
	va_end(ap);
}

void
cputracel(unsigned cpunum, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vmsgl(MT_CPUTRACE, cpunum, trace_to, fmt, ap);
	va_end(ap);
}

void
hwtrace(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vmsg(MT_HWTRACE, 0, trace_to, fmt, ap);
	va_end(ap);
}

void
hwtracel(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	output_vmsgl(MT_HWTRACE, 0, trace_to, fmt, ap);
	va_end(ap);
}

#endif

void
smoke(const char *fmt, ...)
{
	va_list ap;
	
	va_start(ap, fmt);
	output_vmsg(MT_MSG, 0, o_stderr ? o_stderr : o_stdout, fmt, ap);
	va_end(ap);
	
	msg("The hardware has failed.");
	msg("In real life this is where the smoke starts pouring out.");
	
	console_cleanup();
	abort();
}

void
hang(const char *fmt, ...)  // was crash()
{
	va_list ap;
	
	va_start(ap, fmt);
	output_vmsg(MT_MSG, 0, o_stderr ? o_stderr : o_stdout, fmt, ap);
	va_end(ap);
	
	msg("You did something the hardware didn't like.");
	msg("In real life the machine would hang for no apparent reason,");
	msg("or maybe start to act strangely.");

	output_flush(o_stdout);
	if (o_stderr != NULL) {
		output_flush(o_stderr);
	}
#ifdef USE_TRACE
	if (o_tracefile != NULL) {
		output_flush(o_tracefile);
	}
#endif

#ifdef UW
    if (hang_waiting) {
    // wait for debugger connection
    main_stop();
    } else {
    console_cleanup();
    exit(1);
    }
#else
	// wait for debugger connection
	main_stop();
	
	//console_cleanup();
	//exit(1);
#endif /* UW */
}


/*****************************************/

/*
 * Input
 */

static
int
console_getc(void)
{
	char ch;
	int r;

	r = read(STDIN_FILENO, &ch, 1);
	if (r<0) {
		smoke("Read error on stdin: %s", strerror(errno));
	}
	else if (r==0) {
		/* EOF - send back -1 and hope nothing breaks */
		return -1;
	}
	return (int)(unsigned)(unsigned char)ch;
}

static
int
console_sel(void *unused)
{
	int ch;
	(void)unused;

	ch = console_getc();
	if (ch=='\a') {
		/* ^G (BEL) - interrupt */
		main_stop();
	}
	else if (onkey) {
		onkey(onkeydata, ch);
	}

	return 0;
}

void
console_onkey(void *data, void (*func)(void *, int))
{
	onkeydata = data;
	onkey = func;
}


