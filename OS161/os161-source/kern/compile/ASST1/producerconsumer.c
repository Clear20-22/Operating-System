#include <types.h>
#include <lib.h>
#include <thread.h>
#include <synch.h>

#include "producerconsumer.h"

#define BUFFER_SIZE 5
#define NUM_ITEMS 20

static int buffer[BUFFER_SIZE];
static int in = 0;
static int out = 0;
static int count = 0;

static struct lock *buffer_lock;
static struct cv *not_full;
static struct cv *not_empty;

static void
producer(void *data, unsigned long id)
{
    (void)data;

    int i;

    for (i = 1; i <= NUM_ITEMS; i++) {

        lock_acquire(buffer_lock);

        while (count == BUFFER_SIZE) {
            cv_wait(not_full, buffer_lock);
        }

        buffer[in] = i;
        kprintf("Producer %lu produced %d\n", id, i);

        in = (in + 1) % BUFFER_SIZE;
        count++;

        cv_signal(not_empty, buffer_lock);

        lock_release(buffer_lock);
    }
}

static void
consumer(void *data, unsigned long id)
{
    (void)data;

    int item;
    int i;

    for (i = 1; i <= NUM_ITEMS; i++) {

        lock_acquire(buffer_lock);

        while (count == 0) {
            cv_wait(not_empty, buffer_lock);
        }

        item = buffer[out];

        out = (out + 1) % BUFFER_SIZE;
        count--;

        kprintf("Consumer %lu consumed %d\n", id, item);

        cv_signal(not_full, buffer_lock);

        lock_release(buffer_lock);
    }
}

void
run_producerconsumer(void)
{
    int result;

    buffer_lock = lock_create("bufferlock");
    not_full = cv_create("notfull");
    not_empty = cv_create("notempty");

    if (buffer_lock==NULL ||
        not_full==NULL ||
        not_empty==NULL) {

        kprintf("Creation failed\n");
        return;
    }

    result = thread_fork(
            "producer",
            NULL,
            producer,
            NULL,
            1
    );

    if (result) {
        kprintf("Producer fork failed\n");
    }

    result = thread_fork(
            "consumer",
            NULL,
            consumer,
            NULL,
            1
    );

    if (result) {
        kprintf("Consumer fork failed\n");
    }
}
