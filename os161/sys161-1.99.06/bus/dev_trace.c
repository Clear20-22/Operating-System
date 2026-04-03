#include <sys/types.h>
#include <string.h>
#include "config.h"

#include "main.h"

#include "lamebus.h"
#include "busids.h"

const char rcsid_dev_trace_c[] =
    "$Id: dev_trace.c,v 1.4 2002/01/17 22:07:45 dholland Exp $";

#define TRACEREG_ON     0
#define TRACEREG_OFF    4
#define TRACEREG_PRINT  8
#define TRACEREG_DUMP   12


static
void *
trace_init(int slot, int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	(void)slot;

	return NULL;
}

static
int
trace_fetch(unsigned cpunum, void *data, u_int32_t offset, u_int32_t *ret)
{
	(void)cpunum;
	(void)data;
	(void)offset;
	(void)ret;

	return -1;
}

static
int
trace_store(unsigned cpunum, void *data, u_int32_t offset, u_int32_t val)
{
	(void)cpunum;
	(void)data;

	switch (offset) {
	    case TRACEREG_ON:
#ifdef USE_TRACE
		if (adjust_traceflag(val, 1)) {
			hang("Invalid trace code %c (%d)", val, val);
		}
#endif
		break;
	    case TRACEREG_OFF:
#ifdef USE_TRACE
		if (adjust_traceflag(val, 0)) {
			hang("Invalid trace code %c (%d)", val, val);
		}
#endif
		break;
	    case TRACEREG_PRINT:
		msg("trace: code %lu (0x%lx)", 
		    (unsigned long)val, (unsigned long)val);
		break;
	    case TRACEREG_DUMP:
		msg("----------------------------------------"
		    "--------------------------------");
		msg("trace: dump with code %lu (0x%lx)",
		    (unsigned long)val, (unsigned long)val);

		main_dumpstate();

		msg("trace: dump complete");
		msg("----------------------------------------"
		    "--------------------------------");
		break;
	    default:
		return -1;
	}
	return 0;
}

static
void
trace_dumpstate(void *data)
{
	(void)data;
	msg("System/161 trace control device rev %d", TRACE_REVISION);
}

static
void
trace_cleanup(void *data)
{
	(void)data;
}

const struct lamebus_device_info trace_device_info = {
	LBVEND_SYS161,
	LBVEND_SYS161_TRACE,
	TRACE_REVISION,
	trace_init,
	trace_fetch,
	trace_store,
	trace_dumpstate,
	trace_cleanup,
};
