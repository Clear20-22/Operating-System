/*
 * Transparent profiling support.
 */

#include <sys/types.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"

#include "gmon.h"
#include "speed.h"
#include "clock.h"
#include "console.h"
#include "cpu.h"
#include "prof.h"

const char rcsid_prof_c[] = 
    "$Id: prof.c,v 1.2 2004/04/15 20:11:04 dholland Exp $";

#ifdef USE_TRACE

#define PROFILE_FILE "gmon.out"
#define PROFILE_HZ (1000000000/PROFILE_NSECS)

/*
 * Let's use 16-byte profiling bins.
 * We could probably afford to use more memory, but 16 bytes
 * should give us perfectly acceptable results.
 */
#define PROF_BINSIZE  16
#define PROF_ADDR2BIN(addr) (((addr)-prof_textbase)/PROF_BINSIZE)

struct cgentry {
	struct cgentry *next;
	struct gmon_callgraph_entry gce;
};

struct cgbin {
	struct cgentry *list;
};

static u_int32_t prof_textbase = 0;
static u_int32_t prof_textend = 0;
static u_int32_t prof_samplenum;
static u_int16_t *prof_sampledata;
static struct cgbin *prof_cg;
static int prof_active=0;

static
void
prof_sample(void *junk1, u_int32_t junk2)
{
	u_int32_t pc;
	unsigned bin;

	(void)junk1;
	(void)junk2;

	pc = cpuprof_sample();
	bin = PROF_ADDR2BIN(pc);

	if (bin < prof_samplenum) {
		prof_sampledata[bin]++;
	}

	schedule_event(PROFILE_NSECS, NULL, 0, prof_sample, 
		       "profiling sampler");
}

void
prof_call(u_int32_t frompc, u_int32_t topc)
{
	unsigned bin;
	struct cgbin *cb;
	struct cgentry *ce;

	if (prof_active==0) {
		return;
	}

	bin = PROF_ADDR2BIN(frompc);
	if (bin >= prof_samplenum) {
		/* out of range; skip */
		return;
	}

	cb = &prof_cg[bin];

	for (ce = cb->list; ce; ce = ce->next) {
		if (ce->gce.gce_from == frompc &&
		    ce->gce.gce_to == topc) {
			ce->gce.gce_count++;
			return;
		}
	}

	/* need to add a new entry */
	ce = malloc(sizeof(struct cgentry));
	if (ce==NULL) {
		msg("malloc failed updating profiling data");
		die();
	}
	ce->gce.gce_from = frompc;
	ce->gce.gce_to = topc;
	ce->gce.gce_count = 1;

	/* add to head of list */
	ce->next = cb->list;
	cb->list = ce;
}

static
void
writebyte(int val, FILE *f)
{
	u_int8_t byte = val;
	fwrite(&byte, 1, sizeof(u_int8_t), f);
}

void
prof_write(void)
{
	FILE *f;
	struct gmon_file_header gfh;
	struct gmon_histogram_header ghh;
	struct gmon_callgraph_entry gcetmp;
	struct cgbin *cb;
	struct cgentry *ce;
	unsigned i;
	unsigned long len;

	f = fopen(PROFILE_FILE, "w");
	if (!f) {
		msg("Could not open %s (skipping)", PROFILE_FILE);
		return;
	}

	/* file header */
	memset(&gfh, 0, sizeof(gfh));
	memcpy(gfh.gfh_magic, "gmon", 4);
	gfh.gfh_version = htonl(GMON_VERSION);
	fwrite(&gfh, 1, sizeof(gfh), f);

	/* histogram */
	writebyte(GMON_RT_HISTOGRAM, f);
	memset(&ghh, 0, sizeof(ghh));
	ghh.ghh_lowpc = htonl(prof_textbase);
	ghh.ghh_highpc = htonl(prof_textend);
	ghh.ghh_size = htonl(prof_samplenum);
	ghh.ghh_hz = htonl(PROFILE_HZ);
	strcpy(ghh.ghh_name, "seconds");
	ghh.ghh_abbrev = 's';
	fwrite(&ghh, 1, sizeof(ghh), f);
	for (i=0; i<prof_samplenum; i++) {
		u_int16_t tmp = htons(prof_sampledata[i]);
		fwrite(&tmp, 1, sizeof(tmp), f);
	}

	/* call graph */
	for (i=0; i<prof_samplenum; i++) {
		cb = &prof_cg[i];
		for (ce = cb->list; ce; ce = ce->next) {
			writebyte(GMON_RT_CALLGRAPH, f);
			gcetmp.gce_from = htonl(ce->gce.gce_from);
			gcetmp.gce_to = htonl(ce->gce.gce_to);
			gcetmp.gce_count = htonl(ce->gce.gce_count);
			fwrite(&gcetmp, 1, sizeof(gcetmp), f);
		}
	}

	fflush(f);
	if (ferror(f)) {
		msg("Warning: error writing %s", PROFILE_FILE);
	}
	else {
		len = ftell(f);
		msg("%lu bytes written to %s", len, PROFILE_FILE);
	}
	fclose(f);
}

void
prof_addtext(u_int32_t textbase, u_int32_t textsize)
{
	u_int32_t textend;

	/* Round size up to a multiple of PROF_BINSIZE, which is a power of 2*/
	textsize = (textsize+PROF_BINSIZE+1) & ~(u_int32_t)PROF_BINSIZE;

	if (textsize==0) {
		/* just in case */
		return;
	}

	textend = textbase + textsize;

	if (prof_textbase==0 && prof_textend==0) {
		prof_textbase = textbase;
		prof_textend = textend;
	}
	else {
		if (textbase < prof_textbase) {
			prof_textbase = textbase;
		}
		if (textend > prof_textend) {
			prof_textend = textend;
		}
	}
	if (prof_textend <= prof_textbase) {
		smoke("Profiling text region corrupt");
	}
}

void
prof_setup(void)
{
	unsigned i;

	if (prof_textbase==0 && prof_textend==0) {
		/* no text to profile? */
		return;
	}

	if (prof_textend <= prof_textbase) {
		smoke("Profiling text region corrupt");
	}

	/* note: prof_textend has already been rounded up appropriately */
	prof_samplenum = (prof_textend - prof_textbase) / PROF_BINSIZE;

	prof_sampledata = malloc(sizeof(u_int16_t)*prof_samplenum);
	if (prof_sampledata==NULL) {
		msg("malloc failed");
		die();
	}

	prof_cg = malloc(sizeof(struct cgbin)*prof_samplenum);
	if (prof_cg==NULL) {
		msg("malloc failed");
		die();
	}

	for (i=0; i<prof_samplenum; i++) {
		prof_sampledata[i] = 0;
		prof_cg[i].list = NULL;
	}

	prof_active = 1;
	schedule_event(PROFILE_NSECS, NULL, 0, prof_sample, 
		       "profiling sampler");
}

#endif /* USE_TRACE */
