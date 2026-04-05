# OS/161 Assignment Setup Checklist

## ✅ Before You Start

- [ ] Docker Desktop is installed
- [ ] You have 4GB+ available disk space
- [ ] You have 4GB+ available RAM
- [ ] You have the 7 OS/161 tar files in this directory:
  - [ ] os161-1.99.05-UWF16.tar
  - [ ] os161-binutils.tar
  - [ ] os161-gcc.tar
  - [ ] os161-gdb.tar
  - [ ] os161-bmake.tar
  - [ ] os161-mk.tar
  - [ ] sys161-1.99.06-no-hang.tar

## 🚀 Initial Setup (One Time)

```bash
cd /path/to/workspace
make setup
```

This will:

- [ ] Extract OS/161 source to os161-source/
- [ ] Build Docker image (20-30 minutes)
- [ ] Create assignment directories
- [ ] Extract dependencies

**Estimated time:** 30-40 minutes

## 📚 Learn the System

After setup completes, read in order:

1. [ ] Read [INDEX.md](OS161/README/INDEX.md) — Overview
2. [ ] Read [QUICK_START.md](OS161/README/QUICK_START.md) — Daily workflow
3. [ ] Read [ASSIGNMENT_GUIDE.md](OS161/README/ASSIGNMENT_GUIDE.md) — Assignment tips
4. [ ] Bookmark [README_COMPLETE.md](OS161/README/README_COMPLETE.md) — Reference

**Estimated time:** 15 minutes

## 🎯 First Test (Verify Everything Works)

```bash
# Start environment
make up
make shell

# Test build
make build-asst0

# Test run
make run-kernel
```

Expected: Kernel boots, shows menu

**Estimated time:** 5 minutes

## 📝 Start Your First Assignment

```bash
# Enter container
make up && make shell

# Edit code locally (on your machine, not in container)
nano os161-source/kern/main/main.c

# Build your assignment
make build-asst2  # Replace with your assignment

# Test
make run-kernel

# When done
make down
```

## 🔄 Daily Workflow Checklist

**Every time you work:**

```bash
# 1. Start
make up && make shell

# 2. Edit code
nano os161-source/kern/...

# 3. Build
make build-asst2

# 4. Test
make run-kernel

# 5. Stop
make down
```

## 📦 File Organization

After setup, you should have:

```
OS/
├── Dockerfile                    ✅
├── docker-compose.yml            ✅
├── Makefile                      ✅
├── setup-assignments.sh          ✅
├── .dockerignore                 ✅
│
├── INDEX.md                      ✅ START HERE
├── QUICK_START.md               ✅ Daily workflow
├── ASSIGNMENT_GUIDE.md          ✅ Assignment help
├── README_COMPLETE.md           ✅ Technical details
│
├── os161-source/                ✅ Your editable code
├── os161-work/                  ✅ Temporary files
├── assignments/                 ✅ Assignment notes
│   ├── asst0/
│   ├── asst1/
│   ├── asst2/
│   ├── asst3/
│   ├── asst4/
│   └── asst5/
│
├── os161-*.tar                  ✅ Can delete after build
└── sys161-*.tar                 ✅ Can delete after build
```

## 🛠️ Key Commands to Remember

| What You Want    | Command                 |
| ---------------- | ----------------------- |
| One-time setup   | `make setup`            |
| Start work       | `make up && make shell` |
| Stop work        | `make down`             |
| Build ASST0      | `make build-asst0`      |
| Build ASST1      | `make build-asst1`      |
| Build ASST2      | `make build-asst2`      |
| Build ASST3      | `make build-asst3`      |
| Build ASST4      | `make build-asst4`      |
| Build ASST5      | `make build-asst5`      |
| Test kernel      | `make run-kernel`       |
| See all commands | `make help`             |

## 💾 Backup Your Work

**Important:** Backup your code regularly!

```bash
# Inside os161-source/, setup git
cd os161-source
git init
git add .
git commit -m "ASST2: Initial working version"

# Before big changes
git commit -am "ASST2: Before implementing syscalls"
```

## 🐛 If Something Goes Wrong

**Problem:** Docker image won't build

```bash
make clean-image
make setup
```

**Problem:** Changes not showing in container

```bash
make down
make up
# Restart container to refresh volumes
```

**Problem:** Kernel won't compile

```bash
make shell
cd /root/cs350-os161/os161-1.99/kern
bmake clean
make build-asst2
```

**Problem:** Can't remember commands

```bash
make help
```

## ✨ Pro Tips

- **Use Makefile** → Much faster than typing full commands
- **Edit locally** → os161-source/ syncs automatically
- **Test often** → Don't wait until the end
- **Use GDB** → Debug properly, not with printf
- **Commit code** → Save working versions
- **Ask for help** → Don't struggle alone
- **Test on student.cs** → Before final submission

## 📊 Time Estimates

| Task                   | Time       |
| ---------------------- | ---------- |
| Initial setup          | 30-40 min  |
| Learn the system       | 15 min     |
| First test             | 5 min      |
| **Per assignment**     | 40-120 min |
| Daily build/test cycle | 1-5 min    |

## 🎓 Next Steps

1. [ ] Run `make setup`
2. [ ] Wait for build to complete
3. [ ] Read [INDEX.md](OS161/README/INDEX.md)
4. [ ] Read [QUICK_START.md](OS161/README/QUICK_START.md)
5. [ ] Try `make build-asst0 && make run-kernel`
6. [ ] Start your first assignment
7. [ ] Success! 🎉

## 📞 Quick Help

**Forgot how to start?**

```bash
make help
```

**Want to know commands?**

```bash
make help
```

**Need to edit code?**

```bash
# On your machine (not in container)
nano os161-source/kern/main/main.c
```

**Want to build?**

```bash
make build-asst2  # Replace 2 with your assignment
```

**Want to test?**

```bash
make run-kernel
```

---

**You're all set!** Start with `make setup`.

After that, check [QUICK_START.md](OS161/README/QUICK_START.md) for daily workflow.

Good luck! 🚀
