#include <types.h>
#include <lib.h>
#include <synch.h>
#include <thread.h>
#include "math.h"

#define NUM_THREADS   10
#define TARGET_COUNT  10000

/* Shared counter */
static volatile int counter = 0;

/* Lock protecting shared counter */
static struct lock *counter_lock;

/* Store count for each thread */
static int thread_counts[NUM_THREADS];

static void
adder(void *data, unsigned long id)
{
    (void)data;

    int my_count = 0;

    while (1) {
        lock_acquire(counter_lock);
        if (counter >= TARGET_COUNT) {
            lock_release(counter_lock);
            break;
        }
        counter++;
        my_count++;
        lock_release(counter_lock);
    }

    thread_counts[(int)id] = my_count;
    kprintf("Adder %lu performed %d increments\n", id, my_count);
}

void
math(void)
{
    int i;
    int result;

    counter = 0;
    for (i = 0; i < NUM_THREADS; i++) {
        thread_counts[i] = 0;
    }

    counter_lock = lock_create("counter_lock");
    if (counter_lock == NULL) {
        kprintf("math: lock creation failed\n");
        return;
    }

    kprintf("Starting %d adder threads\n", NUM_THREADS);

    for (i = 0; i < NUM_THREADS; i++) {
        result = thread_fork(
                "adder",   /* thread name */
                NULL,      /* proc: run in current process */
                adder,     /* function */
                NULL,      /* data1 */
                i          /* data2 */
                );
        if (result) {
            kprintf("thread_fork failed\n");
        }
    }

    /*
     * Temporary wait loop.
     * OS/161 has no thread_join().
     */
    for (i = 0; i < 100000000; i++);

    kprintf("\nFinal counter value = %d\n", counter);

    for (i = 0; i < NUM_THREADS; i++) {
        kprintf("Thread %d performed %d increments\n", i, thread_counts[i]);
    }

    lock_destroy(counter_lock);
}
