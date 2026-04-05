# OS/161 Assignment Development Environment

## 📚 Documentation

Start here based on your needs:

- **[QUICK_START.md](QUICK_START.md)** ⭐ → **Start here for daily workflow**
- **[ASSIGNMENT_GUIDE.md](ASSIGNMENT_GUIDE.md)** → Assignment-specific tips
- **[README_COMPLETE.md](README_COMPLETE.md)** → Full technical documentation
- **[README.md](README.md)** → Overview

## 🚀 Quick Start (2 minutes)

```bash
# One-time setup (20-30 min)
cd /Users/jubayerahmedsojib/Desktop/OS
make setup

# Daily workflow
make up         # Start
make shell      # Enter
make build-asst2   # Build your assignment
make run-kernel # Test
make down       # Stop
```

## 📁 Files in This Directory

```
Dockerfile                 Multi-stage build definition
docker-compose.yml         Container config for assignments
.dockerignore              Build context filter
Makefile                   Quick commands (make up, make build-asst2, etc.)
setup-assignments.sh       Automated setup script

README.md                  Project overview
README_COMPLETE.md         Full technical documentation
QUICK_START.md            Daily workflow guide
ASSIGNMENT_GUIDE.md       Assignment-specific tips
INDEX.md                  This file

os161-source/              Your editable source code
os161-work/                Temporary work directory
assignments/               Assignment directories (asst0-asst5)

os161-*.tar               Source archives (can delete after build)
sys161-*.tar              Simulator source (can delete after build)
```

## ✨ Key Features

✅ **Multi-stage Docker build** — Optimized for CS350 coursework
✅ **Local editing** — Edit source locally, builds in container
✅ **Makefile commands** — Quick `make build-asst2`, `make run-kernel`
✅ **Assignment structure** — Organized directories for each assignment
✅ **Complete documentation** — Guides for every step
✅ **Production ready** — Used for real OS/161 coursework

## 🔄 Workflow Summary

| Task | Command |
|------|---------|
| Initial setup | `make setup` |
| Start work | `make up && make shell` |
| Edit code | `nano os161-source/kern/...` (on your machine) |
| Build ASST2 | `make build-asst2` |
| Run kernel | `make run-kernel` |
| Debug | `make shell` → `sys161 -d kernel`, GDB |
| Stop work | `make down` |

## 📝 Assignment Checklist

Before submitting each assignment:

- [ ] Code compiles without warnings
- [ ] Kernel boots successfully  
- [ ] All required tests pass
- [ ] Code tested on student.cs (recommended)
- [ ] No debug output in submission
- [ ] Code follows style guidelines
- [ ] Committed to git/version control
- [ ] Backup saved

## 🛠️ Available Configurations

```bash
ASST0    Basic kernel, no changes needed
ASST1    Thread implementation
ASST2    Process management (fork, execv, waitpid)
ASST3    Virtual memory (TLB, paging)
ASST4    File system (SFS implementation)
ASST5    Networking (optional)
```

## 💡 Pro Tips

1. **Use Makefile** — Much faster than typing full commands
2. **Edit locally** — os161-source/ syncs automatically
3. **Test frequently** — Don't wait until the end
4. **Use GDB** — Debug efficiently with breakpoints
5. **Keep backups** — Commit to git regularly
6. **Read assignment spec** — Understand requirements first
7. **Test on student.cs** — Ensure compatibility

## 🎯 Real Workflow Example

### First Assignment (ASST0 - understanding)

```bash
# Setup (one time)
make setup                          # 20-30 min

# Daily work
make up && make shell               # Start
make build-asst0                    # Build (no changes needed)
make run-kernel                     # Run
# Type ?t in sys161 to see tests
make down                           # Stop
```

### Second Assignment (ASST1 - threads)

```bash
# Edit code locally
nano os161-source/kern/synch/lock.c
nano os161-source/kern/thread/thread.c

# Build and test
make up && make shell
make build-asst1
make run-kernel

# Debug if needed
make shell
cd /root/cs350-os161
sys161 -d kernel
# In another terminal: make shell, cs350-gdb kernel

# Stop
make down
```

## 🆘 Need Help?

1. **Build fails** → `make clean`, check for syntax errors
2. **Kernel panics** → Use GDB to debug early boot
3. **Tests don't pass** → Read test output, check spec
4. **Changes not visible** → `make down`, `make up`, restart container

## 📊 Environment Details

**Docker Image:** `os161-env:latest`
- **Size:** 600-700MB
- **Base OS:** Ubuntu 14.04
- **Toolchain:** GCC 4.1.2 (MIPS cross-compiler)
- **Simulator:** sys161 1.99.06
- **OS/161:** Version 1.99.05

**Development Path:**
- **Source:** `os161-source/` (synced to container)
- **Toolchain:** `/root/sys161/` (in container only)
- **Build:** `/root/cs350-os161/` (in container)

## 📌 Important Notes

- **Don't delete:** Dockerfile, docker-compose.yml, os161-source/
- **Can delete:** os161-*.tar files after build completes
- **Synced locally:** os161-source/ (your editable code)
- **Container only:** Compiled kernel, build artifacts, toolchain

## 🎓 Learning Path

1. **ASST0** → Learn the codebase, understand existing code
2. **ASST1** → Implement synchronization (locks, conditions)
3. **ASST2** → Process management (fork, exec, waitpid)
4. **ASST3** → Virtual memory (TLB, paging)
5. **ASST4** → File system (SFS implementation)
6. **ASST5** (optional) → Networking

## ✅ Verification

Check everything works:

```bash
# Should complete without errors
make build-asst0
make run-kernel
# In sys161, press ?t to see tests
```

## 📞 Support Resources

- **Course website** — Assignment specifications
- **OS/161 man pages** — See `os161-source/man/`
- **GDB manual** — For debugging techniques
- **Course staff** — For assignment-specific questions

---

**You're all set!** Start with `make setup` and then follow [QUICK_START.md](QUICK_START.md).

Good luck with your assignments! 🚀
