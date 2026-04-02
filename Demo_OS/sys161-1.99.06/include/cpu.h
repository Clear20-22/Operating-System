#ifndef CPU_H
#define CPU_H

/* nonzero if at least one cpu has work to do */
extern u_int32_t cpu_running_mask;

void cpu_init(unsigned numcpus);
int cpu_cycle(void);  /* returns nonzero if we spent a cycle */

void cpu_dumpstate(void);

/* Functions for enabling/disabling cpus */
void cpu_enable(unsigned cpunum);
void cpu_disable(unsigned cpunum);

/* Functions used for address range translation by the kernel load code */
int cpu_get_load_paddr(u_int32_t vaddr, u_int32_t size, u_int32_t *paddr);
int cpu_get_load_vaddr(u_int32_t paddr, u_int32_t size, u_int32_t *vaddr);

/* Functions used to update the cpu state by the kernel load code */
void cpu_set_entrypoint(unsigned cpunum, u_int32_t addr);
void cpu_set_stack(unsigned cpunum, u_int32_t stackaddr, u_int32_t argument);

/* Function used for secondary cpu initialization */
u_int32_t cpu_get_secondary_start_stack(u_int32_t lboffset);

/* Function for IRQ propagation */
void cpu_set_irqs(unsigned cpunum, int lamebus, int ipi);

/* Functions used by the remote gdb support */
int cpudebug_fetch_byte(u_int32_t va, u_int8_t *byte);
int cpudebug_fetch_word(u_int32_t va, u_int32_t *word);
int cpudebug_store_byte(u_int32_t va, u_int8_t byte);
int cpudebug_store_word(u_int32_t va, u_int32_t word);// not used
void cpudebug_get_bp_region(u_int32_t *start, u_int32_t *end);
void cpudebug_getregs(u_int32_t *regs, int maxregs, int *nregs);

/* Functions used by the profiling code */
u_int32_t cpuprof_sample(void);

#endif /* CPU_H */
