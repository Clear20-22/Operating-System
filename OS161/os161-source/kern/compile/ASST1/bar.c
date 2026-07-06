#include <types.h>
#include <lib.h>
#include <thread.h>
#include <synch.h>

#include "bar.h"

#define NUM_CUSTOMERS 10

static struct semaphore *bar_sem;

static void
customer(void *data, unsigned long id)
{
    (void)data;

    P(bar_sem);

    kprintf("Customer %lu entered bar\n", id);

    volatile int i;
    for(i=0;i<10000000;i++);

    kprintf("Customer %lu leaving bar\n", id);

    V(bar_sem);
}

void
runbar(void)
{
    int i;

    bar_sem = sem_create("barsem",3);

    if(bar_sem==NULL){
        kprintf("Semaphore creation failed\n");
        return;
    }

    for(i=0;i<NUM_CUSTOMERS;i++){

        thread_fork(
            "customer",
            NULL,
            customer,
            NULL,
            i
        );
    }
}
