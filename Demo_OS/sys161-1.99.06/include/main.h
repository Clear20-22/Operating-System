/*
 * Tell mainloop to begin poweroff.
 * (poweroff takes a few ms; see speed.h)
 */
void main_poweroff(void);


/*
 * Tell mainloop it should suspend execution.
 */
void main_stop(void);

/*
 * Tell mainloop it should resume execution.
 */
void main_continue(void);

/*
 * Have the mainloop code run a single processor cycle.
 * Returns nonzero if we hit a breakpoint instruction in that cycle.
 */
void onecycle(void);

/*
 * Have the mainloop code do a complete dump of its state.
 * This ultimately dumps the entire state of sys161.
 */
void main_dumpstate(void);

/*
 * Hardware counters reported at simulator exit.
 */

struct stats_percpu {
	u_int64_t sp_ucycles;  // user mode cycles
	u_int64_t sp_kcycles;  // kernel mode cycles
	u_int64_t sp_icycles;  // idle cycles
};

struct stats {
	u_int64_t s_tot_rcycles; // cycles with at least one cpu running
	u_int64_t s_tot_icycles; // cycles when fully idle
	struct stats_percpu *s_percpu;
	unsigned s_numcpus;
	u_int32_t s_irqs;     // total interrupts
	u_int32_t s_exns;     // total exceptions
	u_int32_t s_rsects;   // disk sectors read
	u_int32_t s_wsects;   // disk sectors written
	u_int32_t s_rchars;   // console chars read
	u_int32_t s_wchars;   // console chars written
	u_int32_t s_remu;     // emufs reads
	u_int32_t s_wemu;     // emufs writes
	u_int32_t s_memu;     // emufs other ops
	u_int32_t s_rpkts;    // network packets read
	u_int32_t s_wpkts;    // network packets written
	u_int32_t s_dpkts;    // network packets dropped
	u_int32_t s_epkts;    // network errors
};

extern struct stats g_stats;
