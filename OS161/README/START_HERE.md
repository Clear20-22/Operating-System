# OS/161 Assignment Development Environment

# Start Here! 👈

## 🎯 Quick Start (3 Steps)

### 1. ONE-TIME SETUP (20-30 minutes)

```bash
cd /path/to/workspace
make setup
```

### 2. READ THE GUIDE

- Open: **INDEX.md** (overview)
- Open: **QUICK_START.md** (daily workflow)
- Open: **CHECKLIST.md** (verification)

### 3. START WORKING

```bash
make up && make shell
# Edit code locally in os161-source/
make build-asst2    # Your assignment
make run-kernel     # Test it
make down           # When done
```

## 📁 What's in This Directory

### Documentation (Read These):

- **INDEX.md** ⭐ Start here (overview)
- **QUICK_START.md** ⭐ Daily workflow
- **CHECKLIST.md** ⭐ Verification steps
- **ASSIGNMENT_GUIDE.md** - Assignment-specific tips
- **README_COMPLETE.md** - Full technical documentation
- **START_HERE.md** - This file

### Configuration (Use These):

- **Dockerfile** - Container definition
- **docker-compose.yml** - Container settings
- **Makefile** - Quick commands (make up, make build-asst2)
- **setup-assignments.sh** - Automated setup script
- **.dockerignore** - Build optimization

### Your Code (Edit These):

- **os161-source/** ✏️ Your editable source code
- **assignments/** ✏️ Assignment directories
- **os161-work/** ✏️ Temporary files

### Archives (Can delete after setup):

- **os161-\*.tar** - Source files (7 archives)
- **sys161-\*.tar** - Simulator source

## ⚡ Essential Commands

### First Time:

```bash
make setup              # One-time setup (builds Docker image)
```

### Every Day:

```bash
make up                 # Start development environment
make shell              # Enter container shell
make build-asst2        # Build your assignment (replace 2 with your number)
make run-kernel         # Test kernel in simulator
make down               # Stop development environment
```

### Help:

```bash
make help               # Show all available commands
```

## 📚 Documentation in Order

1. **CHECKLIST.md** - Verify setup is correct
2. **INDEX.md** - Overview of everything
3. **QUICK_START.md** - Daily workflow (most important)
4. **ASSIGNMENT_GUIDE.md** - Assignment-specific information
5. **README_COMPLETE.md** - Technical deep dive (reference only)

## 🚀 Typical Workflow

### Morning:

```bash
cd /path/to/workspace
make up && make shell
```

### During Work:

```bash
# On your machine (not in container):
nano os161-source/kern/main/main.c

# In container:
make build-asst2
make run-kernel
```

### Evening:

```bash
make down
```

## ✅ Verify Setup Works

After "make setup" completes, test with:

```bash
make build-asst0      # Should compile successfully
make run-kernel       # Should boot and show menu
```

Expected output: OS/161 kernel menu appears, type "q" to quit

## 💡 Key Points

✓ Edit code LOCALLY in os161-source/ - changes sync automatically
✓ Use Makefile commands - much faster than typing full commands
✓ Build and test FREQUENTLY - don't wait until the end
✓ Use GDB for debugging - much more efficient than printf
✓ Backup your work - commit to git regularly
✓ Test on student.cs - before final submission

## 🆘 Something Wrong?

### "make setup" failed?

→ Ensure you have the 7 tar files in this directory
→ Try again with: `make clean-image && make setup`

### Changes not visible in container?

→ Restart: `make down && make up`

### Kernel won't compile?

→ `make shell`, then: `cd /root/cs350-os161/os161-1.99/kern && bmake clean`

### Forgot commands?

→ `make help`

## 📞 Need Help?

Read one of these (in order):

1. **CHECKLIST.md** - Verify everything
2. **QUICK_START.md** - Daily workflow guide
3. **ASSIGNMENT_GUIDE.md** - Assignment-specific help
4. **README_COMPLETE.md** - Technical details

## 🎯 Next Step

Ready? Run:

```bash
cd /path/to/workspace
make setup
```

Then read: **INDEX.md**

Good luck! 🚀
