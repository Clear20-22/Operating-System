#include <types.h>
#include <lib.h>
#include "producerconsumer.h"
#include "producerconsumer_driver.h"

void
producerconsumer_driver(void)
{
    kprintf("\nStarting Producer-Consumer Problem\n");
    run_producerconsumer();
}
