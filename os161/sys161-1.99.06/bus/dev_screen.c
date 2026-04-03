#include <sys/types.h>
#include <string.h>
#include "config.h"

#include "console.h"

#include "busids.h"
#include "lamebus.h"

const char rcsid_dev_screen_c[] = 
    "$Id: dev_screen.c,v 1.6 2001/07/18 23:49:47 dholland Exp $";

static
void *screen_init(int slot, int argc, char *argv[])
{
	msg("Screen device not supported");
	die();

	(void)slot;
	(void)argc;
	(void)argv;
	return NULL;
}

const struct lamebus_device_info screen_device_info = {
	LBVEND_SYS161,
	LBVEND_SYS161_SCREEN,
	SCREEN_REVISION,
	screen_init,
	NULL,  /* fetch */
	NULL,  /* store */
	NULL,  /* dumpstate */
	NULL   /* cleanup */
};

