# OS/161 Assignment Workflow - Quick Start

## One-Time Setup

```bash
cd /Users/jubayerahmedsojib/Desktop/OS
make setup
```

This:
- Extracts OS/161 source
- Builds Docker image (20-30 min)
- Creates assignment directories
- Sets up environment

## Daily Workflow

### 1. Start Development

```bash
cd /Users/jubayerahmedsojib/Desktop/OS
make up        # Start container
make shell     # Enter shell
```

### 2. Edit Code Locally

Your local `os161-source/` folder syncs with container automatically.

```bash
# On your machine (not in container)
nano os161-source/kern/main/main.c
nano os161-source/kern/proc/proc.c
nano os161-source/kern/vm/vm.c
```

Changes appear instantly in the container.

### 3. Build Your Assignment

```bash
# Option A: Using make (quickest)
make build-asst2    # Build ASST2

# Option B: Inside container (manual control)
make shell
cd /root/cs350-os161/os161-1.99/kern/conf
./config ASST2
cd ../compile/ASST2
bmake depend
bmake
bmake install
```

### 4. Test Kernel

```bash
# Option A: Using make
make run-kernel

# Option B: Inside container
make shell
cd /root/cs350-os161
sys161 kernel
```

Inside sys161:
```
OS/161 kernel [? for menu]: ?t       # Run tests
OS/161 kernel [? for menu]: ?o       # Operations
OS/161 kernel [? for menu]: s        # Shell
OS/161 kernel [? for menu]: q        # Quit
```

### 5. Debug Issues

```bash
# View last build log
make shell
cd /root/cs350-os161/os161-1.99/kern/compile/ASST2
cat .depends    # Check dependencies
bmake 2>&1 | tee build.log

# Debug with GDB
# Terminal 1:
make shell
cd /root/cs350-os161
sys161 -d kernel

# Terminal 2:
make shell
cs350-gdb kernel
(gdb) target remote localhost:9191
(gdb) break main
(gdb) step
```

### 6. Stop Development

```bash
make down       # Stop container
```

## Command Quick Reference

| Command | What It Does |
|---------|-------------|
| `make setup` | Initial setup (one time) |
| `make up` | Start container |
| `make shell` | Enter container bash |
| `make build-asst0` | Build ASST0 kernel |
| `make build-asst1` | Build ASST1 kernel |
| `make build-asst2` | Build ASST2 kernel |
| `make run-kernel` | Test kernel in sys161 |
| `make down` | Stop container |
| `make logs` | View container output |
| `make clean` | Clean build artifacts |

## File Locations

**Your code (edit these locally):**
```
os161-source/kern/main/main.c
os161-source/kern/proc/proc.c
os161-source/kern/vm/vm.c
os161-source/kern/fs/fs.c
os161-source/kern/syscall/syscall.c
```

**Build outputs (inside container):**
```
/root/cs350-os161/kernel           # Built kernel
/root/cs350-os161/compile/ASST2/   # Build artifacts
```

**Assignment notes (save here):**
```
assignments/asst2/notes.txt
assignments/asst2/test-results.log
```

## Typical Assignment Timeline

### Week 1: Setup & Understanding
```bash
make setup                          # Setup environment
make up && make shell               # Start container
cd /root/cs350-os161/os161-1.99
# Read assignment specification
# Study existing code
make build-asst2                    # Test building
make run-kernel                     # Test running
```

### Week 2-3: Implementation
```bash
make up && make shell               # Daily start
# Edit code locally
nano os161-source/kern/proc/proc.c
make build-asst2                    # Test compile
make run-kernel                     # Test run
# Debug and iterate
# Keep backup: git commit
make down                           # Daily stop
```

### Week 4: Testing & Refinement
```bash
make build-asst2                    # Final build
make run-kernel                     # Run all tests
# Check for memory leaks with GDB
# Test on student.cs (recommended)
# Final code review
# Prepare submission
```

### Submission
```bash
# Verify code compiles on student.cs
# Run all tests one more time
# Document any known issues
# Submit!
```

## Common Issues & Fixes

**Kernel won't compile:**
```bash
make shell
cd /root/cs350-os161/os161-1.99/kern/compile/ASST2
bmake clean
bmake depend
bmake
```

**Changes not visible in container:**
```bash
# Stop and restart
make down
make up
# Docker volume mounts need fresh containers
```

**sys161 can't find kernel:**
```bash
make shell
cd /root/cs350-os161
ln -sf kernel-ASST2 kernel
sys161 kernel
```

**Compilation too slow:**
```bash
make shell
cd /root/cs350-os161/os161-1.99/kern/compile/ASST2
bmake -j4     # Use 4 parallel jobs
```

**Want to start fresh:**
```bash
make clean
make build-asst2
```

## Backup & Version Control

**Save your work:**
```bash
cd os161-source
git init
git add .
git commit -m "ASST2: Initial implementation"
```

**Before major changes:**
```bash
cd os161-source
git commit -am "ASST2: Working version before VM changes"
```

## Tips for Success

✅ **Compile frequently** — Build after every significant change
✅ **Test incrementally** — Don't wait until everything is done
✅ **Use GDB** — Much faster than debugging with printf
✅ **Keep code clean** — Remove debug output before final submission
✅ **Read errors carefully** — Compiler messages tell you what's wrong
✅ **Version control** — Commit working versions regularly
✅ **Test on student.cs** — Verify compatibility before submission
✅ **Ask for help early** — Don't struggle alone

## Container Persistence

Your `os161-source/` folder syncs automatically. Everything in `/root/sys161/` stays in the container (not on your machine).

**This is intentional:**
- Source code → Your machine (editable, versionable)
- Toolchain → Container only (pre-compiled, read-only)
- Compiled kernel → Container only (rebuild each time)

## Next Steps

1. Run `make setup` to initialize
2. Review `ASSIGNMENT_GUIDE.md` for detailed assignment info
3. Read assignment specification from course
4. Start coding with `make shell`
5. Test with `make build-asst2 && make run-kernel`

Good luck! 🚀
