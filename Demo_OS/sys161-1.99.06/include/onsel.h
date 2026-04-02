/*
 * Event hooks for main loop.
 *
 * If func returns a nonzero value, the fd will be removed from the
 * select loop and removefunc will be called.
 *
 * removefunc may be null.
 */
void onselect(int fd, void *data, int (*func)(void *data),
	      void (*removefunc)(void *data));


/*
 * Select on the things that have had onselect() called on them.
 *
 * If do_poll is true, tryselect will return immediately. Otherwise
 * it will block until something happens.
 */
void tryselect(int do_timeout, u_int32_t secs, u_int32_t nsecs);
