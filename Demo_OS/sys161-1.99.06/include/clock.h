
void clock_init(void);
void clock_cleanup(void);
void clock_tick(void);
void schedule_event(u_int64_t nsecs, void *data, u_int32_t code,
		    void (*func)(void *, u_int32_t),
		    const char *desc);
void clock_time(u_int32_t *secs, u_int32_t *nsecs);

void clock_setsecs(u_int32_t secs);
void clock_setnsecs(u_int32_t nsecs);


void clock_waitirq(void);

void clock_dumpstate(void);
