#include <sys/types.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "config.h"

#include "util.h"
#include "console.h"
#include "gdb.h"
#include "cpu.h"
#include "bus.h"
#include "memdefs.h"
#include "main.h"

#include "context.h"

//#define SHOW_PACKETS

const char rcsid_gdb_be_c[] = "$Id: gdb_be.c,v 1.27 2008/06/27 21:29:27 dholland Exp $";

extern struct gdbcontext g_ctx;
extern int g_ctx_inuse;

static void debug_notsupp(struct gdbcontext *);
static void debug_send(struct gdbcontext *, const char *);
static void debug_register_print(struct gdbcontext *);
static void debug_write_mem(struct gdbcontext *ctx, const char *spec);
static void debug_read_mem(struct gdbcontext *ctx, const char *spec);
static void debug_restart(struct gdbcontext *ctx, const char *addr);

void
unset_breakcond(void)
{
	//inbreakpoint = 0;
	main_continue();
}

void
set_breakcond(void)
{
	//inbreakpoint = 1;
}

/* pkt is null-terminated */
void 
debug_exec(struct gdbcontext *ctx, const char *pkt) 
{
	char *cs;  /* start of the checksum */
	int i;
	int check = 0, scheck;

#ifdef SHOW_PACKETS
	msg("Got packet %s", pkt);
#endif

	if (pkt[0] != '$') {
		return;
	}

	cs = strchr(pkt, '#');
	if (cs == NULL) {
		return;
	}
	*cs = 0;
	cs++;

	for (i=1; pkt[i]; i++) {
		check += pkt[i];
	}

	scheck = strtoul(cs, NULL, 16);
	if (scheck != check % 256) {
		write(ctx->myfd, "-", 1);
	} else {
		write(ctx->myfd, "+", 1);
	}

	switch(pkt[1]) {
	    case 'H':
		debug_send(ctx, "OK");
		set_breakcond();
		break;
	    case 'D':
		debug_send(ctx, "OK");
		unset_breakcond();
		break;
	    case 'k':
		// don't do this - debugger hangs up and we get SIGPIPE
		//debug_send(ctx, "OK");
		msg("Debugger requested kill");
		die();
		// To continue running instead of dying, do this instead
		//unset_breakcond();
		break;
	    case 'q':
		if (strcmp(pkt+2, "Offsets") == 0) {
			debug_notsupp(ctx);
		}
		else if (strcmp(pkt+2, "Supported") == 0) {
			debug_notsupp(ctx);
		}
		else if (strcmp(pkt + 2, "C") == 0) {
			debug_send(ctx,"C=000");
		}
		else {
			debug_notsupp(ctx);
		}
		break;
	    case 'Z':
	    case 'z':
		// doing this breaks gdb >= 5.0
		//debug_send(ctx, "E01");
		debug_notsupp(ctx);
		break;
	    case 'X':
		debug_notsupp(ctx);
		break;
	    case '?':
		debug_send(ctx, "S05");
		break;
	    case 'g':
		debug_register_print(ctx);
		break;
	    case 'm':
		debug_read_mem(ctx, pkt + 2);
		break;
	    case 'M':
		debug_write_mem(ctx, pkt + 2);
		break;
	    case 'c':
		unset_breakcond();
		debug_restart(ctx, pkt + 2);
		break;
	    case 's':
		debug_restart(ctx, pkt + 2);
		onecycle();
		debug_send(ctx, "S05");
		break;
	    default:
		debug_notsupp(ctx);
		break;
	}
}

static
void 
debug_send(struct gdbcontext *ctx, const char *string) 
{
	char checkstr[8];
	int check=0;
	int i;

	if (ctx->myfd < 0) {
		msg("Warning: sending debugger packet, no debugger");
		msg("(please report what caused this to the course staff)");
	}

	for (i=0; string[i]; i++) {
		check += string[i];
	}

	check %= 256;
	snprintf(checkstr, sizeof(checkstr),  "#%02x", check);

#ifdef SHOW_PACKETS
	msg("Sending $%s%s", string, checkstr);
#endif

	write(ctx->myfd, "$", 1);
	write(ctx->myfd, string, strlen(string)); 
	write(ctx->myfd, checkstr, strlen(checkstr));
}

static
void
debug_notsupp(struct gdbcontext *ctx)
{
	const char rep[] = "$\0#00";
#ifdef SHOW_PACKETS
	msg("Sending $\\0#00");
#endif
	write(ctx->myfd, rep, sizeof(rep) - 1);
}

void
gdb_startbreak(void)
{
	if (g_ctx_inuse) {
		/* If connected, tell the debugger we stopped */
		debug_send(&g_ctx, "S05");
	}
	else {
		msg("Waiting for debugger connection...");
	}
	set_breakcond();
}

static
void
printbyte(char *buf, size_t maxlen, u_int32_t val)
{
	size_t len = strlen(buf);
	Assert(len < maxlen);

	snprintf(buf+len, maxlen - len, "%02x", val);
}

static
void
printword(char *buf, size_t maxlen, u_int32_t val)
{
	size_t len = strlen(buf);
	Assert(len < maxlen);

	snprintf(buf+len, maxlen - len, "%08x", val);
}

static
void
debug_register_print(struct gdbcontext *ctx)
{
	u_int32_t regs[256];
	int i, nregs;
	char buf[BUFLEN];

	cpudebug_getregs(regs, 256, &nregs);
	Assert(nregs <= 256);

	buf[0] = 0;
	for (i=0; i<nregs; i++) {
		printword(buf, sizeof(buf), regs[i]);
	}

	debug_send(ctx, buf);
}

static
void
debug_read_mem(struct gdbcontext *ctx, const char *spec)
{
	u_int32_t vaddr, length, i;
	u_int32_t word;
	u_int8_t byte;
	const char *curptr;
	char buf[BUFLEN];

	vaddr = strtoul(spec, (char **)&curptr, 16);
	length = strtoul(curptr+1, NULL, 16);

	buf[0] = 0;

	for (i=0; i<length && (vaddr+i)%4 != 0; i++) {
		if (cpudebug_fetch_byte(vaddr+i, &byte)) {
			debug_send(ctx, "E03");
			return;
		}
		printbyte(buf, sizeof(buf), byte);
	}
	for (; i<length; i += 4) {
		if (cpudebug_fetch_word(vaddr+i, &word)) {
			debug_send(ctx, "E03");
			return;
		}
		printword(buf, sizeof(buf), word);
	}
	debug_send(ctx, buf);
}

static
u_int8_t
hexbyte(const char *s, char **ret)
{
	char buf[3];
	int i, j;

	for (i=j=0; i<2 && s[i]; i++) {
		buf[j++] = s[i];
	}
	buf[j] = 0;
	*ret = (char *)&s[i];
	return strtoul(buf, NULL, 16);
}

static
void
debug_write_mem(struct gdbcontext *ctx, const char *spec)
{
	u_int32_t vaddr, length, i;
	u_int8_t *bytes;
	const char *curptr;

	// AAAAAAA,LLL:DDDD
	// address,len,data
	vaddr = strtoul(spec, (char **) &curptr, 16);
	length = strtoul(curptr + 1, (char **)&curptr, 16);

	// curptr now points to the ':' which 
	// delimits the length from the data
	// so we advance it a little
	curptr++;

	bytes = domalloc(length);
	for (i=0; i<length; i++) {
		bytes[i] = hexbyte(curptr, (char **) &curptr);
	}

	for (i=0; i<length && (vaddr+i)%4 != 0; i++) {
		if (cpudebug_store_byte(vaddr+i, bytes[i])) {
			debug_send(ctx, "E03");
			return;
		}
	}
	for (; i+4<=length; i+=4) {
		u_int32_t word;
		memcpy(&word, bytes+i, sizeof(u_int32_t));
		if (cpudebug_store_word(vaddr+i, ntohl(word))) {
			debug_send(ctx, "E03");
			return;
		}
	}
	for (; i<length; i++) {
		if (cpudebug_store_byte(vaddr+i, bytes[i])) {
			debug_send(ctx, "E03");
			return;
		}
	}

	free(bytes);
	debug_send(ctx, "OK");
}

static
void
debug_restart(struct gdbcontext *ctx, const char *addr)
{
	unsigned int realaddr;

	(void)ctx;  /* ? */

	if (*addr == '\0') {
		return;
	}
	msg("whee!  gdb changed the restart address");
	realaddr = strtoul(addr, NULL, 16);
	cpu_set_entrypoint(0 /*cpunum, XXX*/, realaddr);
}

