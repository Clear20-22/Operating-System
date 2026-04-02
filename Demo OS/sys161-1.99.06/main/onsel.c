#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"

#include "console.h"
#include "onsel.h"


const char rcsid_onsel_c[] = "$Id: onsel.c,v 1.5 2001/01/27 01:43:16 dholland Exp $";

#define MAXSELS 64

static struct {
	int sd_fd;
	void *sd_data;
	int (*sd_func)(void *data);
	void (*sd_rfunc)(void *data);
} selections[MAXSELS];
static int nsels=0;

static
int
findsel(void)
{
	int i;
	for (i=0; i<nsels; i++) {
		if (selections[i].sd_fd < 0) {
			return i;
		}
	}
	if (nsels < MAXSELS) {
		return nsels++;
	}
	return -1;
}

void
onselect(int fd, void *data, int (*func)(void *), void (*rfunc)(void *))
{
	int ix = findsel();
	if (ix<0) {
		smoke("Ran out of select() records in mainloop");
	}

	selections[ix].sd_fd = fd;
	selections[ix].sd_data = data;
	selections[ix].sd_func = func;
	selections[ix].sd_rfunc = rfunc;
}

void
tryselect(int dotimeout, u_int32_t secs, u_int32_t nsecs)
{
	int i, r, hifd=-1;
	fd_set myset;
	struct timeval tv;

	tv.tv_sec = secs;
	tv.tv_usec = nsecs / 1000;

	FD_ZERO(&myset);
	for (i=0; i<nsels; i++) {
		int fd = selections[i].sd_fd;
		if (fd<0) continue;
		FD_SET(fd, &myset);
		if (fd > hifd) hifd = fd;
	}

	r = select(hifd+1, &myset, NULL, NULL, dotimeout ? &tv : NULL);
	if (r<=0) {
		return;
	}

	for (i=0; i<nsels; i++) {
		int fd = selections[i].sd_fd;
		if (fd < 0 || !FD_ISSET(fd, &myset)) {
			continue;
		}

		r = selections[i].sd_func(selections[i].sd_data);
		if (r) {
			if (selections[i].sd_rfunc) {
				selections[i].sd_rfunc(selections[i].sd_data);
			}
			selections[i].sd_fd = -1;
		}
	}
}
