#include <sys/types.h>
#include <sys/time.h>
#include <sys/stat.h> // for mkdir()
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"

#include "util.h"
#include "console.h"
#include "trace.h"
#include "prof.h"
#include "meter.h"
#include "gdb.h"
#include "cpu.h"
#include "bus.h"
#include "clock.h"
#include "speed.h"
#include "onsel.h"
#include "main.h"
#include "version.h"

const char rcsid_main_c[] =
    "$Id: main.c,v 1.31 2004/04/30 20:12:39 dholland Exp $";

/* Global stats */
struct stats g_stats;

/* Flag for interrupting runloop or stoploop due to poweroff */
static int shutoff_flag;

/* Flag for interrupting stoploop() */
static int continue_flag;

#ifdef UW
/* Control whether or not sys161 should hang waiting for gdb or not */
/* In the original it hangs waiting and this cause problems for auto testing */
int hang_waiting = 0;
#endif /* UW */

/* Flag for interrupting runloop() */
static int stop_flag;

void
main_poweroff(void)
{
	shutoff_flag = 1;
}

void
main_stop(void)
{
	stop_flag = 1;
}

void
main_continue(void)
{
	continue_flag = 1;
}

static
void
stoploop(void)
{
	gdb_startbreak();
	continue_flag = 0;
	while (!continue_flag && !shutoff_flag) {
		tryselect(0, 0, 0);
	}
}

/*
 * This is its own function because it's called from the gdb support
 * to single-step. We only bill time if cpu_cycle reports it actually
 * did something. (Which it always does, except if it hits a builtin
 * breakpoint. It's essential to make the builtin breakpoints
 * completely transparent, even to the extent of not wasting a single
 * cycle, so it's possible to debug those race conditions where
 * there's a two-instruction window for an interrupt to cause a crash.
 */
inline
void
onecycle(void)
{
	if (cpu_cycle()) {
		clock_tick();
	}
}

/* number of cpu cycles between select polls */
#define ROTOR 8192

static
void
runloop(void)
{
	int rotor=0;

	stop_flag = 0;

	while (!shutoff_flag) {

		onecycle();

		rotor++;
		if (rotor >= ROTOR) {
			rotor = 0;
			tryselect(1, 0, 0);
		}

		if (stop_flag) {
			stoploop();
			stop_flag = 0;
		}
	}
}

static
void
initstats(unsigned ncpus)
{
	unsigned i;

	g_stats.s_percpu = domalloc(ncpus * sizeof(*g_stats.s_percpu));
	g_stats.s_numcpus = ncpus;

	for (i=0; i<ncpus; i++) {
		g_stats.s_percpu[i].sp_kcycles = 0;
		g_stats.s_percpu[i].sp_ucycles = 0;
		g_stats.s_percpu[i].sp_icycles = 0;
	}
}

static
u_int64_t
showstats(void)
{
	u_int64_t totcycles, cpu_totcycles;
	unsigned i;

	totcycles = g_stats.s_tot_rcycles + g_stats.s_tot_icycles;
	msg("%llu cycles (%llu run, %llu global-idle)",
	    (unsigned long long)totcycles,
	    (unsigned long long)g_stats.s_tot_rcycles,
	    (unsigned long long)g_stats.s_tot_icycles);

	for (i=0; i<g_stats.s_numcpus; i++) {
		cpu_totcycles = g_stats.s_percpu[i].sp_kcycles
			+ g_stats.s_percpu[i].sp_ucycles
			+ g_stats.s_percpu[i].sp_icycles;
		msg("  cpu%u: %llu kern, %llu user, %llu idle)", i,
		    (unsigned long long) g_stats.s_percpu[i].sp_kcycles,
		    (unsigned long long) g_stats.s_percpu[i].sp_ucycles,
		    (unsigned long long) g_stats.s_percpu[i].sp_icycles);
	}

	msg("%u irqs %u exns %ur/%uw disk %ur/%uw console %ur/%uw/%um emufs"
	    " %ur/%uw net",
	    g_stats.s_irqs,
	    g_stats.s_exns,
	    g_stats.s_rsects,
	    g_stats.s_wsects,
	    g_stats.s_rchars,
	    g_stats.s_wchars,
	    g_stats.s_remu,
	    g_stats.s_wemu,
	    g_stats.s_memu,
	    g_stats.s_rpkts,
	    g_stats.s_wpkts);

	return totcycles;
}

void
main_dumpstate(void)
{
	msg("mainloop: shutoff_flag %d continue_flag %d stop_flag %d",
	    shutoff_flag, continue_flag, stop_flag);
#ifdef USE_TRACE
	print_traceflags();
#endif
	gdb_dumpstate();
	showstats();
	clock_dumpstate();
	cpu_dumpstate();
	bus_dumpstate();
}

static
void
run(void)
{
	struct timeval starttime, endtime;
	u_int64_t totcycles;
	double time;

	gettimeofday(&starttime, NULL);

	runloop();

	gettimeofday(&endtime, NULL);

	endtime.tv_sec -= starttime.tv_sec;
	if (endtime.tv_usec < starttime.tv_usec) {
		endtime.tv_sec--;
		endtime.tv_usec += 1000000;
	}
	endtime.tv_usec -= starttime.tv_usec;

	time = endtime.tv_sec + endtime.tv_usec/1000000.0;

	totcycles = showstats();

	msg("Elapsed real time: %llu.%06lu seconds (%g mhz)",
	    (unsigned long long) endtime.tv_sec,
	    (unsigned long) endtime.tv_usec,
	    totcycles/(time*1000000.0));
}

////////////////////////////////////////////////////////////

/*
 * We don't use normal getopt because we need to stop on the
 * first non-option argument, and normal getopt has no standard
 * way to specify that.
 */

static const char *myoptarg;
static int myoptind, myoptchr;

static
int
mygetopt(int argc, char **argv, const char *myopts)
{
	int myopt;
	const char *p;

	if (myoptind==0) {
		myoptind = 1;
	}

	do {
		if (myoptind >= argc) {
			return -1;
		}
		
		if (myoptchr==0) {
			if (argv[myoptind][0] != '-') {
				return -1;
			}
			myoptchr = 1;
		}

		myopt = argv[myoptind][myoptchr];

		if (myopt==0) {
			myoptind++;
			myoptchr = 0;
		}
		else {
			myoptchr++;
		}

	} while (myopt == 0);

	if (myopt == ':' || (p = strchr(myopts, myopt))==NULL) {
		return '?';
	}
	if (p[1]==':') {
		/* option takes argument */
		if (strlen(argv[myoptind]+myoptchr)>0) {
			myoptarg = argv[myoptind]+myoptchr;
		}
		else {
			myoptarg = argv[++myoptind];
			if (myoptarg==NULL) {
				return '?';
			}
		}
		myoptind++;
		myoptchr = 0;
	}

	return myopt;
}

////////////////////////////////////////////////////////////

static
void
usage(void)
{
	msg("System/161 %s, compiled %s %s", VERSION, __DATE__, __TIME__);
	msg("Usage: sys161 [sys161 options] kernel [kernel args...]");
	msg("   sys161 options:");
	msg("     -c config      Use alternate config file");
#ifdef USE_TRACE
	msg("     -f file        Trace to specified file");
	msg("     -P             Collect kernel execution profile");
#else
	msg("     -f file        (trace161 only)");
	msg("     -P             (trace161 only)");
#endif
	msg("     -p port        Listen for gdb over TCP on specified port");
	msg("     -s             Pass signal-generating characters through");
#ifdef USE_TRACE
	msg("     -t[kujtxidne]  Set tracing flags");
#else
	msg("     -t[flags]      (trace161 only)");
#endif
	msg("     -w             Wait for debugger before starting");
#ifdef UW
    msg("     -H             Do hang waiting for debugger to connect");
#endif
	die();
}

int
main(int argc, char *argv[])
{
	int port = 2344;
	const char *config = "sys161.conf";
	const char *kernel = NULL;
	int usetcp=0;
	char *argstr = NULL;
	int j, opt;
	size_t argsize=0;
	int debugwait=0;
	int pass_signals=0;
#ifdef USE_TRACE
	int profiling=0;
#endif
	unsigned ncpus;

	/* This must come absolutely first so msg() can be used. */
	console_earlyinit();
	
	if (sizeof(u_int32_t)!=4) {
		/*
		 * Just in case.
		 */
		msg("sys161 requires sizeof(u_int32_t)==4");
		die();
	}

#ifdef UW
  while ((opt = mygetopt(argc, argv, "c:f:Hp:Pst:w"))!=-1) {
#else
	while ((opt = mygetopt(argc, argv, "c:f:p:Pst:w"))!=-1) {
#endif /* UW */
		switch (opt) {
#ifdef UW
             case 'H': hang_waiting = 1; break;
#endif /* UW */
		    case 'c': config = myoptarg; break;
		    case 'f':
#ifdef USE_TRACE
			set_tracefile(myoptarg);
#endif
			break;
		    case 'p': port = atoi(myoptarg); usetcp=1; break;
		    case 'P':
#ifdef USE_TRACE
			profiling = 1;
#endif
			break;
		    case 's': pass_signals = 1; break;
		    case 't': 
#ifdef USE_TRACE
			set_traceflags(myoptarg); 
#endif
			break;
		    case 'w': debugwait = 1; break;
		    default: usage();
		}
	}
	if (myoptind==argc) {
		usage();
	}
	kernel = argv[myoptind++];
	
	for (j=myoptind; j<argc; j++) {
		argsize += strlen(argv[j])+1;
	}
	argstr = malloc(argsize+1);
	if (!argstr) {
		msg("malloc failed");
		die();
	}
	*argstr = 0;
	for (j=myoptind; j<argc; j++) {
		strcat(argstr, argv[j]);
		if (j<argc-1) strcat(argstr, " ");
	}

	/* This must come before bus_config in case a network card needs it */
	mkdir(".sockets", 0700);
	
	console_init(pass_signals);
	clock_init();
	ncpus = bus_config(config);

	initstats(ncpus);
	cpu_init(ncpus);

	if (usetcp) {
		gdb_inet_init(port);
	}
	else {
		unlink(".sockets/gdb");
		gdb_unix_init(".sockets/gdb");
	}

	unlink(".sockets/meter");
	meter_init(".sockets/meter");

	load_kernel(kernel, argstr);

	msg("System/161 %s, compiled %s %s", VERSION, __DATE__, __TIME__);
#ifdef USE_TRACE
	print_traceflags();
	if (profiling) {
		prof_setup();
	}
#endif

	if (debugwait) {
		stoploop();
	}
	
	run();

#ifdef USE_TRACE
	if (profiling) {
		prof_write();
	}
#endif

	bus_cleanup();
	console_cleanup();
	clock_cleanup();
	
	return 0;
}
