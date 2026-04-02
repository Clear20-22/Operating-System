#ifndef PROF_H
#define PROF_H

/* call while loading the kernel image */
void prof_addtext(u_int32_t textbase, u_int32_t textsize);

/* call after loading the kernel image to turn on profiling */
void prof_setup(void);

/* call on exit (or whenever, actually) to write gmon.out */
void prof_write(void);

/* call from cpu code when a function-call instruction is reached */
void prof_call(u_int32_t frompc, u_int32_t topc);

#endif /* PROF_H */
