/*
 * Copyright (c) 2013
 *      The President and Fellows of Harvard College.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE UNIVERSITY AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE UNIVERSITY OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _PROC_H_
#define _PROC_H_

/*
 * Definition of a process.
 *
 * Note: curproc is defined by <current.h>.
 */

#include <spinlock.h>
#include <thread.h> /* required for struct threadarray */
#include <synch.h>  /* required for struct lock, struct cv */
#include <limits.h> /* PID_MIN / PID_MAX, if defined here */

struct addrspace;
struct vnode;
#ifdef UW
struct semaphore;
#endif // UW

/* Max number of simultaneously-live processes tracked by the pid table. */
#define MAX_PROC 512

/*
 * Process structure.
 */
struct proc {
        char *p_name;                   /* Name of this process */
        struct spinlock p_lock;         /* Lock for this structure */
        struct threadarray p_threads;   /* Threads in this process */

        /* VM */
        struct addrspace *p_addrspace;  /* virtual address space */

        /* VFS */
        struct vnode *p_cwd;           /* current working directory */

#ifdef UW
        struct vnode *console;
#endif

        /* ========================= */
        /* ASST2 ADDITIONS START HERE */
        /* ========================= */

        pid_t pid;                     /* process ID */
        pid_t ppid;                    /* parent's process ID (0/-1 if none) */
        struct proc *parent;           /* parent process, may be NULL */

        struct cv *exit_cv;            /* waitpid synchronization */
        struct lock *proc_lock;        /* protects exited/exit_status, paired with exit_cv */

        int exit_status;               /* status from exit() */
        bool exited;                   /* has process exited */

        /* ========================= */
};

/* This is the process structure for the kernel and for kernel-only threads. */
extern struct proc *kproc;

/* Semaphore used to signal when there are no more processes */
#ifdef UW
extern struct semaphore *no_proc_sem;
#endif // UW

/* Call once during system startup to allocate data structures. */
void proc_bootstrap(void);

/* Create a fresh process for use by runprogram(). */
struct proc *proc_create_runprogram(const char *name);

/* Destroy a process. */
void proc_destroy(struct proc *proc);

/* Attach a thread to a process. Must not already have a process. */
int proc_addthread(struct proc *proc, struct thread *t);

/* Detach a thread from its process. */
void proc_remthread(struct thread *t);

/* Fetch the address space of the current process. */
struct addrspace *curproc_getas(void);

/* Change the address space of the current process, and return the old one. */
struct addrspace *curproc_setas(struct addrspace *);

/* ========================= */
/* PID management (Task 3)  */
/* ========================= */

/* Allocate a fresh pid; returns 0 and sets *retval, or an error code. */
int pid_alloc(pid_t *retval);

/* Free a pid slot once its process has been fully reaped. */
void pid_dealloc(pid_t pid);

/* Look up the proc struct currently holding a given pid, or NULL. */
struct proc *proc_lookup_pid(pid_t pid);
void proc_orphan_children(struct proc *p);

#endif /* _PROC_H_ */
