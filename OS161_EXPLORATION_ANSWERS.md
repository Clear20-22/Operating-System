# OS/161 Code Exploration Answers

A comprehensive guide to answering all 23 OS/161 exploration questions by examining the source code directly using Docker.

## Table of Contents
1. [Setup & Access](#setup--access)
2. [Questions & Answers](#questions--answers)
3. [Useful Commands Learned](#useful-commands-learned)
4. [Tips for Exploring OS/161](#tips-for-exploring-os161)

---

## Setup & Access

### Running OS/161 in Docker

The OS/161 source tree is set up inside a Docker container (`os161-dev`). To access it:

```bash
# Start the container (if not running)
docker start os161-dev

# Execute commands inside the container
docker exec os161-dev bash -c "cd /root/cs350-os161 && <command>"

# Access the container shell interactively
docker exec -it os161-dev bash
```

**Container Path:** `/root/cs350-os161/os161-1.99/` (the actual OS/161 source)

**Key Directories:**
- `kern/` - Kernel source code
- `kern/include/` - Header files
- `kern/arch/mips/` - MIPS architecture-specific code
- `kern/conf/` - Configuration files
- `kern/startup/` - Kernel initialization

---

## Questions & Answers

### Question 1: What is the vm system called that is configured for assignment 0?

**Answer:** `dumbvm`

**File Location:** `kern/conf/ASST0`

**Command Used:**
```bash
grep -i "options.*vm\|dumbvm" kern/conf/ASST0
```

**Explanation:**
The ASST0 configuration file contains the line `options dumbvm`, which specifies the virtual memory system to use. This is a basic, simple VM implementation suitable for early assignments.

---

### Question 2: Which register number is used for the stack pointer (sp) in OS/161?

**Answer:** Register **29** (written as `$29`)

**File Location:** `kern/arch/mips/include/kern/regdefs.h`

**Command Used:**
```bash
grep "#define sp" kern/arch/mips/include/kern/regdefs.h
```

**Explanation:**
The register definition file contains `#define sp  $29`, clearly showing that the stack pointer is MIPS register 29. This is standard MIPS architecture convention.

---

### Question 3: What bus/busses does OS/161 support?

**Answer:** **lamebus** (System/161 main bus)

**File Location:** `kern/conf/ASST0`

**Command Used:**
```bash
grep "device.*lamebus" kern/conf/ASST0
```

**Explanation:**
The configuration file shows `device lamebus0` as the primary bus, with all other devices connected to it. OS/161 only supports the lamebus architecture in the System/161 emulator.

---

### Question 4: Why do we use typedefs like uint32_t instead of simply saying "int"?

**Answer:** To ensure **portable, fixed-size integer types** across different architectures and compilers.

**File Location:** `kern/include/kern/types.h`

**Command Used:**
```bash
head -80 kern/include/kern/types.h
```

**Explanation:**
Using fixed-size types like `__i32` ensures exactly 32 bits on any platform, avoiding portability issues and maintaining ISO C standard compliance. This prevents namespace pollution and ensures library headers work correctly on all architectures.

---

### Question 5: What function is called when user-level code generates a fatal fault?

**Answer:** `kill_curthread()`

**File Location:** `kern/arch/mips/locore/trap.c`

**Command Used:**
```bash
grep -B 5 "Function called when user-level code hits a fatal fault" kern/arch/mips/locore/trap.c
```

**Explanation:**
The trap handler contains a function that handles fatal faults by terminating the current thread.

---

### Question 6: How frequently are hardclock interrupts generated?

**Answer:** **100 times per second** (HZ = 100)

**File Location:** `kern/include/clock.h`

**Command Used:**
```bash
grep -A 3 "#define HZ" kern/include/clock.h
```

**Explanation:**
The clock header defines HZ = 100 for normal operation (or 10000 for synchronization problems mode).

---

### Question 7: How many characters are allowed in an SFS volume name?

**Answer:** **32 characters** (SFS_VOLNAME_SIZE = 32)

**File Location:** `kern/include/kern/sfs.h`

**Command Used:**
```bash
grep "SFS_VOLNAME_SIZE" kern/include/kern/sfs.h
```

**Explanation:**
The SFS (Simple File System) header defines the maximum volume name length as 32 characters.

---

### Question 8: How many direct blocks does an SFS file have?

**Answer:** **15 direct blocks** (SFS_NDIRECT = 15)

**File Location:** `kern/include/kern/sfs.h`

**Command Used:**
```bash
grep "SFS_NDIRECT" kern/include/kern/sfs.h
```

**Explanation:**
Each SFS inode has 15 direct block pointers, with additional indirect blocks for larger files.

---

### Question 9: What is the standard interface to a file system?

**Answer:** Implement the **vnode operations (VOP_* macros)** including READ, WRITE, OPEN, CLOSE, LOOKUP, MKDIR, REMOVE, etc.

**File Location:** `kern/include/vnode.h`

**Command Used:**
```bash
grep "#define VOP_" kern/include/vnode.h | head -20
```

**Explanation:**
To implement a new filesystem, define function pointers for VOP operations that the VFS layer calls.

---

### Question 10: What function puts a thread to sleep?

**Answer:** `wchan_sleep()`

**File Location:** `kern/include/wchan.h`

**Command Used:**
```bash
grep "void wchan_sleep" kern/include/wchan.h
```

**Explanation:**
The wait channel module provides wchan_sleep() to put a thread to sleep on a synchronization primitive.

---

### Question 11: How large are OS/161 pids?

**Answer:** **32 bits** (signed 32-bit integer)

**File Location:** `kern/include/kern/types.h`

**Command Used:**
```bash
grep "__pid_t" kern/include/kern/types.h
```

**Explanation:**
Process IDs are defined as `__i32`, a signed 32-bit type.

---

### Question 12: What operations can you do on a vnode?

**Answer:** All the VOP_* operations (see Question 9): OPEN, CLOSE, READ, WRITE, LOOKUP, MKDIR, REMOVE, RENAME, LINK, READLINK, STAT, TRUNCATE, etc.

**File Location:** `kern/include/vnode.h`

**Command Used:**
```bash
grep "#define VOP_" kern/include/vnode.h
```

---

### Question 13: What is the maximum path length in OS/161?

**Answer:** **1024 characters** (PATH_MAX = 1024)

**File Location:** `kern/include/kern/limits.h`

**Command Used:**
```bash
grep "PATH_MAX" kern/include/kern/limits.h
```

**Explanation:**
Any pathname cannot exceed 1024 characters.

---

### Question 14: What is the system call number for a reboot?

**Answer:** **119** (SYS_reboot = 119)

**File Location:** `kern/include/kern/syscall.h`

**Command Used:**
```bash
grep "SYS_reboot" kern/include/kern/syscall.h
```

**Explanation:**
System call 119 is the reboot system call.

---

### Question 15: Where is STDIN_FILENO defined?

**Answer:** `kern/include/kern/unistd.h`

**File Location:** `kern/include/kern/unistd.h`

**Command Used:**
```bash
grep "STDIN_FILENO" kern/include/kern/unistd.h
```

**Explanation:**
STDIN_FILENO = 0 following POSIX standards.

---

### Question 16: What does kmain() do?

**Answer:** **Calls boot() to initialize the kernel, then calls menu() to start the user command interface.**

**File Location:** `kern/startup/main.c`

**Command Used:**
```bash
grep -A 10 "^kmain" kern/startup/main.c
```

**Explanation:**
kmain() is the kernel entry point that orchestrates initialization and then hands off to the menu thread.

---

### Question 17: What is the difference between splhigh and spl0?

**Answer:** 
- **splhigh()** - Disables all interrupts (sets IPL to HIGH)
- **spl0()** - Enables all interrupts (sets IPL to 0)

**File Location:** `kern/include/spl.h`

**Command Used:**
```bash
grep -A 3 "spl0\|splhigh" kern/include/spl.h
```

**Explanation:**
These functions control interrupt masking for critical sections.

---

### Question 18: What does splx return?

**Answer:** **Returns the old interrupt priority level (IPL)** that was active before the call.

**File Location:** `kern/include/spl.h`

**Command Used:**
```bash
grep -B 2 -A 5 "int splx" kern/include/spl.h
```

**Explanation:**
This allows restoring previous interrupt state: `int s = splhigh(); ... splx(s);`

---

### Question 19: What is a zombie?

**Answer:** **A thread that has exited but not yet been deleted/reclaimed from the system.**

**File Location:** `kern/include/thread.h`

**Command Used:**
```bash
grep "S_ZOMBIE" kern/include/thread.h
```

**Explanation:**
Zombie state allows parent to retrieve the thread's exit status before cleanup.

---

### Question 20: What does a device name in OS/161 look like?

**Answer:** **"DEVNAME:"** or **"DEVNAME"** for mounting. Examples: "con:", "lhd0"

**File Location:** `kern/include/vfs.h`

**Command Used:**
```bash
grep -A 5 "accessible as" kern/include/vfs.h
```

**Explanation:**
Device names include a colon for raw access but not when mounting.

---

### Question 21: What does a raw device name in OS/161 look like?

**Answer:** **"DEVNAMEraw:"** Examples: "lhd0raw:"

**File Location:** `kern/include/vfs.h`

**Command Used:**
```bash
grep "DEVNAMEraw" kern/include/vfs.h
```

**Explanation:**
Raw device names use the "raw:" suffix for direct hardware access.

---

### Question 22: What lock protects the vnode reference count?

**Answer:** **vfs_biglock** (global VFS big lock)

**File Location:** `kern/vfs/vfslist.c`

**Command Used:**
```bash
grep "vfs_biglock" kern/vfs/vfslist.c | head -3
```

**Explanation:**
A single global lock protects all VFS operations including reference counts.

---

### Question 23: What device types are currently supported?

**Answer:** lamebus (main bus), disk (lhd), serial (lser), timer (ltimer), console (con), rtclock, random, and emulator passthrough (emu).

**File Location:** `kern/conf/ASST0`

**Command Used:**
```bash
grep "^device" kern/conf/ASST0
```

**Explanation:**
The ASST0 configuration file lists all available and enabled devices.

---

## Useful Commands Learned

Top 10 grep commands for OS/161 exploration:

### 1. Search configuration for VM system
```bash
grep "options" kern/conf/ASST0
```

### 2. Find register definitions
```bash
grep "#define sp\|#define ra" kern/arch/mips/include/kern/regdefs.h
```

### 3. Search across all header files
```bash
grep -r "PATH_MAX\|STDIN_FILENO" kern/include/
```

### 4. Find function with context
```bash
grep -B 5 -A 10 "^kmain" kern/startup/main.c
```

### 5. Extract constants with comments
```bash
grep "HZ\|SFS_NDIRECT\|SFS_VOLNAME_SIZE" kern/include/*
```

### 6. Find VOP operations
```bash
grep "#define VOP_" kern/include/vnode.h
```

### 7. Search for synchronization primitives
```bash
grep -r "wchan_sleep\|splhigh\|spl0" kern/include/
```

### 8. Locate system call numbers
```bash
grep "SYS_" kern/include/kern/syscall.h
```

### 9. Find locks and synchronization
```bash
grep -r "vfs_biglock\|lock_create" kern/vfs/
```

### 10. Search multiple patterns
```bash
grep -E "S_RUN|S_READY|S_SLEEP|S_ZOMBIE" kern/include/thread.h
```

---

## Tips for Exploring OS/161

### Key Directories

**Architecture-Specific (MIPS):**
- `kern/arch/mips/include/kern/regdefs.h` - Register definitions
- `kern/arch/mips/locore/trap.c` - Trap handling
- `kern/arch/mips/vm/` - Paging implementation

**Core Subsystems:**
- `kern/include/thread.h` - Thread structure and states
- `kern/include/vnode.h` - Virtual node operations
- `kern/include/vfs.h` - VFS layer interface
- `kern/include/spl.h` - Interrupt control
- `kern/include/wchan.h` - Synchronization primitives

**Filesystem:**
- `kern/include/kern/sfs.h` - SFS on-disk format
- `kern/fs/sfs/` - SFS implementation
- `kern/vfs/` - VFS implementations

**Initialization:**
- `kern/startup/main.c` - kmain() and boot sequence

### Exploration Strategy

1. Start with include headers to understand interfaces
2. Read MIPS-specific files to learn register conventions
3. Study thread structure and states
4. Follow VFS layer from high-level to specific filesystems
5. Examine boot sequence in main.c

### Search Tips

- Use `grep -r` for cross-file searches
- Chain greps to narrow results: `grep "pattern1" file | grep "pattern2"`
- Use `grep -B 5 -A 10` to get context
- Use `grep -E` for regex patterns
- Use `--include="*.h"` to limit to headers only
- Use `find` combined with `grep` for multi-file searches

---

## Docker Workflow Summary

```bash
# Start container
docker start os161-dev

# Execute search
docker exec os161-dev bash -c "
  cd /root/cs350-os161/os161-1.99 && \
  grep -r 'pattern' kern/include/ --include='*.h'
"

# Interactive exploration
docker exec -it os161-dev bash
cd /root/cs350-os161/os161-1.99
grep -r "search_term" kern/

# Stop container
docker stop os161-dev
```

---

## Summary

All 23 questions answered with:
- **Exact answer** - precise and verified from source
- **File location** - where to find the source code
- **Command used** - how to locate it yourself
- **Explanation** - why this is the correct answer

**Remember:** Always examine source code directly. The code is the authoritative source of truth!
