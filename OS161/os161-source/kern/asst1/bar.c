#include <types.h>
#include <lib.h>
#include <thread.h>
#include <synch.h>
#include "bar.h"

#define NUM_CUSTOMERS 10

/* Limits how many customers can be inside the bar at once (max 3) */
static struct semaphore *bar_sem;

/*
 * Counts how many customer threads are still running.
 * runbar() waits on this so it doesn't return before every
 * customer thread has actually finished.
 */
static struct semaphore *done_sem;

static void
customer(void *data, unsigned long id)
{
    (void)data;

    /* Wait for a free spot in the bar (max 3 at a time) */
    P(bar_sem);

    kprintf("Customer %lu entered bar\n", id);

    volatile int i;
    for (i = 0; i < 10000000; i++);

    kprintf("Customer %lu leaving bar\n", id);

    /* Free up the spot for another customer */
    V(bar_sem);

    /* Tell runbar() that this customer thread is finished */
    V(done_sem);
}

void
runbar(void)
{
    int i, result;

    bar_sem = sem_create("barsem", 3);
    if (bar_sem == NULL) {
        kprintf("Semaphore creation failed\n");
        return;
    }

    done_sem = sem_create("donesem", 0);
    if (done_sem == NULL) {
        kprintf("Semaphore creation failed\n");
        sem_destroy(bar_sem);
        return;
    }

    kprintf("Starting %d customer threads\n", NUM_CUSTOMERS);

    for (i = 0; i < NUM_CUSTOMERS; i++) {
        result = thread_fork(
            "customer",
            NULL,
            customer,
            NULL,
            i
        );
        if (result) {
            kprintf("runbar: thread_fork failed: %d\n", result);
        }
    }

    /*
     * Wait here until every customer thread has called V(done_sem).
     * Without this, runbar() (and therefore bar_driver()) returns
     * immediately while customer threads are still running in the
     * background.
     */
    for (i = 0; i < NUM_CUSTOMERS; i++) {
        P(done_sem);
    }

    sem_destroy(bar_sem);
    sem_destroy(done_sem);

    kprintf("All customers have gone home. Bar is closed.\n");
}
