#include <sys/types.h>
#include <sys/time.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"

#include "console.h"
#include "speed.h"
#include "clock.h"
#include "cpu.h"
#include "bus.h"
#include "onsel.h"
#include "main.h"

/*
 * random() is a BSD function that is usually documented to return
 * values in the range 0 to 2^31-1, independent of RAND_MAX. It
 * appears, on some systems, that this is in fact the case and that
 * RAND_MAX must be ignored. So define RANDOM_MAX for our own purposes.
 * (Also see comment in dev_random.c.)
 *
 * Nowadays NetBSD defines RANDOM_MAX for us; maybe other systems will
 * sometime too.
 */

#ifndef RANDOM_MAX
#define RANDOM_MAX 0x7fffffffUL
#endif


const char rcsid_clock_c[] =
    "$Id: clock.c,v 1.16 2008/06/27 21:24:27 dholland Exp $";

struct timed_action {
	struct timed_action *ta_next;
	u_int64_t ta_clocksat;
	void *ta_data;
	u_int32_t ta_code;
	void (*ta_func)(void *, u_int32_t);
	const char *ta_desc;
	int ta_dotimefixup; // XXX (see uses below)
};

static u_int32_t now_secs;
static u_int32_t now_nsecs;

static u_int32_t start_secs, start_nsecs;

static u_int64_t now_clocks;

static int now_is_behind; // XXX (see uses below)

/**************************************************************/

/* up to 16 simultaneous timed actions per device */
#define MAXACTIONS 1024
static struct timed_action action_storage[MAXACTIONS];
static struct timed_action *ta_freelist = NULL;

static
struct timed_action *
acalloc(void)
{
	struct timed_action *ta;
	if (ta_freelist == NULL) {
		smoke("Too many pending hardware interrupts");
	}
	ta = ta_freelist;
	ta_freelist = ta->ta_next;
	return ta;
}

static
void
acfree(struct timed_action *ta)
{
	ta->ta_next = ta_freelist;
	ta_freelist = ta;
}

static
void
acalloc_init(void)
{
	int i;
	for (i=0; i<MAXACTIONS; i++) {
		acfree(&action_storage[i]);
	}
}

/*************************************************************/

static struct timed_action *queuehead = NULL;

static
void
check_queue(void)
{
	struct timed_action *ta;
	while (queuehead != NULL) {
		ta = queuehead;
		if (ta->ta_dotimefixup) {
			smoke("Checked a dotimefixup event");
		}
		if (ta->ta_clocksat > now_clocks) {
			return;
		}

		queuehead = ta->ta_next;
		
		ta->ta_func(ta->ta_data, ta->ta_code);

		acfree(ta);
	}
}

void
schedule_event(u_int64_t nsecs, void *data, u_int32_t code,
	       void (*func)(void *, u_int32_t),
	       const char *desc)
{
	u_int64_t clocks;
	struct timed_action *n, **p;

	nsecs += (u_int64_t)((random()*(nsecs*0.01))/RANDOM_MAX);

	clocks = nsecs / NSECS_PER_CLOCK;

	n = acalloc();
	n->ta_clocksat = now_clocks + clocks;
	n->ta_data = data;
	n->ta_code = code;
	n->ta_func = func;
	n->ta_desc = desc;
	n->ta_dotimefixup = now_is_behind;

	/*
	 * Sorted linked-list insert.
	 */

	for (p = &queuehead; (*p) != NULL; p = &(*p)->ta_next) {
		if (n->ta_clocksat < (*p)->ta_clocksat) {
			break;
		}
	}

	n->ta_next = (*p);
	(*p) = n;
}

static
void
dotimefixups(u_int64_t cycles)
{
	/*
	 * XXX.
	 *
	 * The problem is that onsel.c, which is all tidily abstracted
	 * away, affects timing. In particular, the select with a
	 * timeout in clock_dowait returns after an interval that can
	 * only be determined by checking gettimeofday(). Therefore,
	 * the "current time" (now_*) when it's running can be either
	 * the time before the sleep or the conjectured time after the
	 * sleep. Until 20090228 it used to be the latter. But with a
	 * long timeout that makes a mess if the select returns much
	 * earlier due to e.g. a keypress.
	 *
	 * (With OS/161 2.x, where the 100 Hz hardclock is done by the
	 * on-chip timer (which just counts cycles and doesn't use
	 * timed events) there's just a 1 Hz lbolt timer, and assuming
	 * the sleep had gone that long was leading to 10-second and more
	 * waits on disk I/Os after typing for a bit.)
	 *
	 * However, if the current time is set to the time before the
	 * sleep, then any events queued by a select handler
	 * (currently only the console input throttling logic) can be
	 * queued to happen in what'll be the past when the select
	 * returns, and that's not so good either; for one thing it'll
	 * defeat the console input throttling.
	 *
	 * So what we do is queue them in the past, mark them for time
	 * fixup, and after wakeup add time to any marked events in
	 * the queue.
	 *
	 * Bleck.
	 *
	 * The timing logic needs a *big* rework.
	 */

	struct timed_action *n;

	for (n = queuehead; n != NULL; n = n->ta_next) {
		if (n->ta_dotimefixup) {
			n->ta_clocksat += cycles;
			n->ta_dotimefixup = 0;
		}
	}
}

void
clock_time(u_int32_t *secs, u_int32_t *nsecs)
{
	if (secs) *secs = now_secs;
	if (nsecs) *nsecs = now_nsecs;
}

void
clock_setsecs(u_int32_t secs)
{
	//reschedule_queue(secs - now_secs, 0);
	now_secs = secs;
}

void
clock_setnsecs(u_int32_t nsecs)
{
	//reschedule_queue(0, nsecs - now_nsecs);
	now_nsecs = nsecs;
}

/* Always call clock_advance or check_queue after this */
static
inline
void
clock_advance_secs(u_int32_t secs)
{
	now_secs += secs;
}

static
inline
void
clock_advance(u_int32_t nsecs)
{
	/* Believe it or not, gcc generates better code with this here */
	u_int32_t tmp;

	tmp = now_nsecs;

	tmp += nsecs;
	if (tmp >= 1000000000) {
		tmp -= 1000000000;
		now_secs++;
	}

	now_nsecs = tmp;

	check_queue();
}

void
clock_init(void)
{
	struct timeval tv;
	u_int32_t offset;

	acalloc_init();
	gettimeofday(&tv, NULL);
	now_secs = tv.tv_sec;
	now_nsecs = 1000*tv.tv_usec;
	now_clocks = 0;

	/* Shift the clock ahead a random fraction of 10 ms. */
	offset = random() % 10000000;
	clock_advance(offset);

	start_secs = now_secs;
	start_nsecs = now_nsecs;
}

void
clock_cleanup(void)
{
	u_int32_t secs, nsecs;

	secs = now_secs - start_secs;
	if (now_nsecs < start_nsecs) {
		nsecs = (1000000000 + now_nsecs) - start_nsecs;
		secs--;
	}
	else {
		nsecs = now_nsecs - start_nsecs;
	}

	msg("Elapsed virtual time: %lu.%09lu seconds (%d mhz)", 
	    (unsigned long)secs, 
	    (unsigned long)nsecs,
	    1000/NSECS_PER_CLOCK);
}

void
clock_dumpstate(void)
{
	struct timed_action *ta;

	msg("clock: %lu.%09lu secs (start at %lu.%09lu)", 
	    (unsigned long) now_secs,
	    (unsigned long) now_nsecs,
	    (unsigned long) start_secs,
	    (unsigned long) start_nsecs);
	msg("clock:    %9llu ticks", (unsigned long long) now_clocks);

	if (queuehead==NULL) {
		msg("clock: No events pending");
		return;
	}

	for (ta = queuehead; ta; ta = ta->ta_next) {
		msg("clock: at %9llu: %s",
		    (unsigned long long) ta->ta_clocksat, ta->ta_desc);
	}
}

void
clock_tick(void)
{
	clock_advance(NSECS_PER_CLOCK);
	now_clocks++;
	g_stats.s_tot_rcycles++;
}

static
void
report_idletime(u_int32_t secs, u_int32_t nsecs)
{
	u_int64_t idlensecs;
	static u_int32_t slop;

	idlensecs = secs * (u_int64_t)1000000000 + nsecs + slop;

	g_stats.s_tot_icycles += idlensecs / NSECS_PER_CLOCK;
	slop = idlensecs % NSECS_PER_CLOCK;
}

static
void
clock_dowait(u_int32_t secs, u_int32_t nsecs, u_int64_t clocks)
{
	/* XXX fix up the sign handling in here */
	struct timeval tv;
	u_int32_t then_secs, then_nsecs;
	u_int64_t then_clocks;
	int32_t wsecs, wnsecs;
	int32_t sleptsecs, sleptnsecs;
	u_int64_t sleptclocks;

	/*
	 * Figure the time we're waiting until.
	 */
	then_clocks = now_clocks + clocks;
	then_secs = now_secs + secs;
	then_nsecs = now_nsecs + nsecs;
	if (then_nsecs > 1000000000) {
		then_nsecs -= 1000000000;
		then_secs++;
	}

	/*
	 * Figure out how far ahead of real wall time we will be. If we
	 * aren't, don't sleep. If we are, sleep to synchronize, as
	 * long as it's more than 10 ms. (If it's less than that,
	 * we're not likely to return from select in anything
	 * approaching an expeditions manner. Also, on some systems,
	 * select with small timeouts does timing loops to implement
	 * usleep(), and we don't want that. The only point of
	 * sleeping at all is to be nice to other users on the system.)
	 */
	gettimeofday(&tv, NULL);
	wsecs = then_secs - tv.tv_sec;
	wnsecs = then_nsecs - 1000*tv.tv_usec;
	if (wnsecs < 0) {
		wnsecs += 1000000000;
		wsecs--;
	}

	if (wsecs >= 0 && wnsecs > 10000000) {
		/* Sleep. */
		now_is_behind = 1;
		tryselect(1, wsecs, wnsecs);
		now_is_behind = 0;

		/* Figure out how long we slept (might be less *or* more) */
		gettimeofday(&tv, NULL);
		sleptsecs = tv.tv_sec - now_secs;
		sleptnsecs = 1000*tv.tv_usec - now_nsecs;
		if (sleptnsecs < 0) {
			sleptnsecs += 1000000000;
			sleptsecs--;
		}

		/* Clamp to wsecs/wnsecs to avoid confusion. */
		if (sleptsecs > wsecs) {
			sleptsecs = wsecs;
			sleptnsecs = wnsecs;
		}
		else if (sleptnsecs > wnsecs) {
			sleptnsecs = wnsecs;
		}

		sleptclocks = (sleptsecs * 1000000000ULL + sleptnsecs)
			/ NSECS_PER_CLOCK;
	}
	else {
		now_is_behind = 1;
		tryselect(1, 0, 0);
		now_is_behind = 0;

		sleptclocks = clocks;
		sleptsecs = secs;
		sleptnsecs = nsecs;
	}

	// XXX (see definition above)
	dotimefixups(sleptclocks);

	now_clocks += sleptclocks;
	clock_advance_secs(sleptsecs);
	clock_advance(sleptnsecs);
	report_idletime(sleptsecs, sleptnsecs);
}

void
clock_waitirq(void)
{
	while (cpu_running_mask == 0) {
		if (queuehead != NULL) {
			u_int64_t clocks;
			u_int64_t nsecs;
			u_int32_t secs;

			clocks = queuehead->ta_clocksat - now_clocks;
			nsecs = clocks * NSECS_PER_CLOCK;

			secs = nsecs / 1000000000;
			nsecs = nsecs % 1000000000;

			clock_dowait(secs, nsecs, clocks);
		}
		else {
			struct timeval tv1, tv2;

			gettimeofday(&tv1, NULL);
			tryselect(0, 0, 0);
			gettimeofday(&tv2, NULL);

			tv2.tv_sec -= tv1.tv_sec;
			if (tv2.tv_usec < tv1.tv_usec) {
				tv2.tv_usec += 1000000;
				tv2.tv_sec--;
			}
			tv2.tv_usec -= tv1.tv_usec;

			clock_advance_secs(tv2.tv_sec);
			clock_advance(tv2.tv_usec * 1000);
			report_idletime(tv2.tv_sec, tv2.tv_usec * 1000);

			/* don't advance now_clocks - no reason to bother */
		}
	}
}
