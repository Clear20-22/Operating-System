# OS/161 Assignment Guide

This guide covers the typical workflow for each assignment.

## Assignment Structure

```
assignments/
├── asst0/  # Basic kernel, threads
├── asst1/  # Thread implementation
├── asst2/  # Process management
├── asst3/  # Virtual memory
├── asst4/  # File system
└── asst5/  # Networking (optional)
```

## General Workflow

### 1. Setup Environment

```bash
cd /Users/jubayerahmedsojib/Desktop/OS
docker compose up -d
docker compose exec os161 bash
```

### 2. Configure Kernel for Assignment

```bash
cd /root/cs350-os161/os161-1.99/kern/conf

# Choose configuration based on assignment
./config ASST0    # Basic
./config ASST1    # After you implement threads
./config ASST2    # After you implement processes
./config ASST3    # After you implement VM
./config ASST4    # After you implement filesystem
./config ASST5    # Networking (optional)
```

### 3. View Your Source Files (Editable)

```bash
# On local machine, edit files directly
nano os161-source/kern/main/main.c
nano os161-source/kern/proc/proc.c
nano os161-source/kern/vm/vm.c

# Changes sync to container automatically
```

### 4. Build and Test

```bash
cd /root/cs350-os161/os161-1.99/kern/compile/ASST0
bmake depend
bmake
bmake install
```

### 5. Run Kernel

```bash
cd /root/cs350-os161
sys161 kernel

# Inside sys161:
OS/161 kernel [? for menu]: ?t      # Run tests menu
OS/161 kernel [? for menu]: ?o      # Run operations
OS/161 kernel [? for menu]: s       # Start shell
```

### 6. Debug Issues

**Check for compilation errors:**
```bash
cd /root/cs350-os161/os161-1.99/kern/compile/ASST0
bmake 2>&1 | tee build.log
```

**Check kernel output:**
```bash
cd /root/cs350-os161
sys161 kernel 2>&1 | tee kernel.log
```

**Use GDB debugger:**
```bash
# Terminal 1
cd /root/cs350-os161
sys161 -d kernel

# Terminal 2
docker compose exec os161 bash
cs350-gdb kernel
(gdb) target remote localhost:9191
(gdb) break main
(gdb) continue
```

## Assignment-Specific Tips

### ASST0 - Basic Kernel
- Focus on understanding the codebase
- Run existing tests: `?t` in sys161 menu
- No code changes required for basic submission

### ASST1 - Thread System
- Implement locks and condition variables
- Test with `lt` (lock tests) in sys161
- Common files: `kern/thread/`, `kern/synch/`

### ASST2 - Process Management
- Implement fork, execv, waitpid syscalls
- Test with process tests
- Common files: `kern/proc/`, `kern/syscall/`

### ASST3 - Virtual Memory
- Implement TLB management and page tables
- Use DUMBVM as starting point
- Common files: `kern/vm/`, `kern/arch/mips/`

### ASST4 - File System
- Implement SFS (Simple File System)
- Implement file syscalls
- Common files: `kern/fs/`, `kern/vfs/`

## Quick Reference Commands

```bash
# Start development environment
docker compose up -d && docker compose exec os161 bash

# Configure and build specific assignment
cd /root/cs350-os161/os161-1.99/kern/conf
./config ASST2                          # For ASST2
cd ../compile/ASST2
bmake depend && bmake && bmake install

# Run kernel
cd /root/cs350-os161
sys161 kernel

# Run specific tests
OS/161 kernel [? for menu]: ?t
# Select test from menu

# Stop environment
docker compose down

# View your local source
cat os161-source/kern/main/main.c
```

## Submission Checklist

Before submitting each assignment:

- [ ] Code compiles without warnings
- [ ] Kernel boots successfully
- [ ] All required tests pass
- [ ] No memory leaks (use GDB)
- [ ] Code follows course style guidelines
- [ ] Comments explain non-obvious code
- [ ] No debug output in production code
- [ ] Tested on actual student.cs environment (recommended)

## File Locations

**Your source code (editable locally):**
```
os161-source/
├── kern/          # Kernel implementation
│   ├── main/      # Main kernel code
│   ├── proc/      # Process management (ASST2)
│   ├── synch/     # Synchronization (ASST1)
│   ├── vm/        # Virtual memory (ASST3)
│   ├── fs/        # File system (ASST4)
│   ├── syscall/   # System calls
│   └── arch/      # Architecture-specific (MIPS)
├── user/          # User space programs
└── common/        # Shared libraries
```

**Inside container (read-only):**
```
/root/sys161/tools/          # Compiled toolchain
/root/cs350-os161/kernel     # Your built kernel
/root/cs350-os161/compile/   # Build artifacts
```

**Assignment directories:**
```
assignments/asst0/    # Your notes, test results, etc.
assignments/asst1/
...
```

## Troubleshooting Assignments

**Kernel won't compile:**
```bash
# Clean and rebuild
cd /root/cs350-os161/os161-1.99/kern/compile/ASST2
bmake clean
bmake depend
bmake
```

**Kernel panics on startup:**
```bash
# Check for infinite loops in main()
# Use GDB to debug early kernel code
sys161 -d kernel
```

**Tests don't run:**
```bash
# Verify kernel built correctly
cd /root/cs350-os161
sys161 kernel
# Check if ? menu appears
```

**Compilation takes too long:**
```bash
# Use parallel make
cd /root/cs350-os161/os161-1.99/kern/compile/ASST2
bmake -j4  # Use 4 parallel jobs
```

## Getting Help

1. **Check OS/161 man pages:**
   ```bash
   cat os161-source/man/syscall/fork.html  # View in browser
   ```

2. **Read course documentation:**
   Check the assignment specification on course website

3. **Test incrementally:**
   Build and test each feature before moving to next

4. **Use GDB effectively:**
   Learn breakpoints, stepping, and backtraces

5. **Keep code clean:**
   Remove debug output before testing

## Success Tips

✅ **Start early** — Assignments take time to debug

✅ **Test incrementally** — Don't wait until everything is done

✅ **Use GDB** — Much faster than printf debugging

✅ **Read the specification** — Understand requirements first

✅ **Study existing code** — Learn from working implementations

✅ **Backup your work** — Commit to git regularly

✅ **Test on student.cs** — Ensure compatibility before submission

Good luck with your assignments!
