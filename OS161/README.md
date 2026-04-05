# OS/161 Complete Docker Image

This Dockerfile builds a complete OS/161 development environment from scratch, implementing all 10 steps from the official installation guide.

## Architecture

**Multi-Stage Build:**

- **Stage 1 (builder):** Downloads, extracts, and compiles everything (~1.5GB intermediate)
- **Stage 2 (runtime):** Copies only compiled binaries and source to clean image (~800MB final)
- Build dependencies automatically removed → 60% size reduction

## What's Inside

✅ **Complete Toolchain (Steps 1-7)**

- Binutils 2.17+os161-2.0.1 (assembler, linker, binary utilities)
- GCC 4.1.2+os161-2.0 (MIPS cross-compiler)
- GDB 6.6+os161-2.0 (debugger)
- bmake + mk (build system)
- cs350-\* symlinks for all tools

✅ **sys161 Simulator (Step 8)**

- sys161-1.99.06 MIPS emulator
- Configured as big-endian (mipseb)
- Ready to run OS/161 kernels

✅ **OS/161 Source & Kernel (Step 9)**

- os161-1.99 source code (editable in local directory)
- Pre-configured with `./configure --ostree=/root/cs350-os161`
- Pre-built kernel at `/root/cs350-os161/kernel`
- Ready to run immediately

## Directory Structure

```
Container:
  /root/sys161/                    # Toolchain root
    ├── bin/                       # cs350-* symlinks
    ├── tools/bin/                 # Actual binaries
    ├── tools/share/mk/            # bmake mk files
    └── sys161.conf                # sys161 config

  /root/cs350-os161/               # OS/161 workspace
    ├── os161-1.99/                # Source code (MOUNTED)
    ├── compile/                   # Compiled objects (MOUNTED)
    └── kernel                     # Pre-built kernel binary

Local (Your Machine):
  ./os161-source/                  # Mount point for os161-1.99
  ./os161-compile/                 # Mount point for compile/
```

## Quick Start

### 1. Setup (First Time)

```bash
cd /path/to/OS
bash setup.sh
```

This creates local directories and builds the image (~20-30 min).

### 2. Extract Your OS/161 Source

```bash
# Copy your os161-1.99 directory contents to os161-source/
cp -r your_os161_source/* os161-source/
```

### 3. Start Development

```bash
# Start container in background
docker compose up -d

# Enter container shell
docker compose exec os161 bash

# Inside container:
cd /root/cs350-os161/os161-1.99
# ... edit files locally, they sync automatically ...

# Rebuild kernel
cd /root/cs350-os161/compile
bmake
bmake install

# Test
cd /root/cs350-os161
sys161 kernel
```

### 4. Stop When Done

```bash
docker compose down
```

## Development Workflow (Editable Local Files)

### Edit Code Locally

```bash
# Your local machine
nano os161-source/kern/main/main.c
# Changes sync to container automatically
```

### Build in Container

```bash
docker compose exec os161 bash
cd /root/cs350-os161/compile
bmake
bmake install
sys161 kernel
```

### Output Files in Local Directory

```bash
# Compiled kernel is also in:
ls -lh os161-compile/
```

## Quick Commands

### Run Pre-Built Kernel (No Editing)

```bash
docker compose up -d
docker compose exec os161 sys161 kernel
# Inside sys161: type 'q' to quit
docker compose down
```

### Verify Tools

```bash
docker compose exec os161 bash -c "\
  echo 'GCC:' && cs350-gcc --version && \
  echo 'GDB:' && cs350-gdb --version && \
  echo 'sys161:' && sys161 --version && \
  echo 'bmake:' && bmake --version"
```

### Interactive Development

```bash
docker compose up -d
docker compose exec os161 bash

# Inside container, now you can:
cd /root/cs350-os161/os161-1.99
less kern/main/main.c          # View your code
cd /root/cs350-os161/compile
bmake depend                   # Generate dependencies
bmake                          # Compile
bmake install                  # Install to kernel
sys161 kernel                  # Run kernel
# Ctrl+D to exit
docker compose down
```

### Debug with GDB (Two Terminals)

```bash
# Terminal 1
docker compose exec os161 bash
cd /root/cs350-os161
sys161 -d kernel

# Terminal 2 (new terminal)
docker compose exec os161 cs350-gdb kernel
(gdb) target remote localhost:9191
(gdb) break main
(gdb) continue
```

## Multi-Stage Build Benefits

| Aspect                  | Single-Stage          | Multi-Stage (Used Here)  |
| ----------------------- | --------------------- | ------------------------ |
| **Build time**          | Slow (no cache reuse) | Fast (caches each layer) |
| **Final size**          | 2GB+                  | ~800MB                   |
| **Build deps included** | Yes (~500MB)          | No (removed)             |
| **Rebuildable**         | Yes                   | Yes (keep source)        |

**Why Multi-Stage?**

1. Stage 1 compiles everything with build tools
2. Stage 2 copies only the binaries (build tools discarded)
3. Reduces image from 2GB → 800MB
4. Faster pushes/pulls, less storage

## Volume Mounts Explained

```yaml
volumes:
  - ./os161-source:/root/cs350-os161/os161-1.99:rw # Your source code
  - ./os161-compile:/root/cs350-os161/compile:rw # Compiled objects
```

**What this means:**

- `./os161-source/` on your machine ↔ `/root/cs350-os161/os161-1.99/` in container
- Changes in either location sync automatically
- Files persist after container stops

## Image Size

- **Final:** ~800MB
- **Original (unoptimized):** ~2GB
- **Size savings:** 60% via multi-stage

## Environment Variables (Inside Container)

```bash
OS161_HOME=/root/sys161
TOOLDIR=/root/sys161/tools
PATH=/root/sys161/bin:/root/sys161/tools/bin:$PATH
MAKESYSPATH=/root/sys161/tools/share/mk
```

## Available Tools (All Pre-Installed)

```bash
cs350-gcc          # MIPS C compiler
cs350-as           # MIPS assembler
cs350-ld           # MIPS linker
cs350-gdb          # MIPS debugger
cs350-objdump      # Object file analyzer
cs350-readelf      # ELF file reader
cs350-nm           # Symbol lister
cs350-ar           # Archive creator
cs350-ranlib       # Archive indexer
bmake              # Build tool
sys161             # MIPS simulator
```

## Troubleshooting

### Build Fails

```bash
# Increase Docker memory to 4GB, then retry:
docker build --no-cache -t os161-env:latest .
```

### Permissions Error on Volume Mount

```bash
# Run as root inside container
docker compose exec os161 bash -u root
```

### Changes Not Syncing to Container

```bash
# Restart the container
docker compose down
docker compose up -d
docker compose exec os161 bash
```

### Can't Find Kernel

```bash
docker compose exec os161 ls -lh /root/cs350-os161/kernel
# Should show: -rwxr-xr-x kernel
```

## Files in This Directory

- `Dockerfile` - Multi-stage build for complete OS/161 environment
- `docker-compose.yml` - Easy container management with volume mounts
- `.dockerignore` - Exclude unnecessary files from build
- `README.md` - This file
- `setup.sh` - First-time setup script
- `os161-source/` - Local copy of OS/161 source (created after setup)
- `os161-compile/` - Local copy of compiled objects (created after setup)

## References

- [Official OS/161 Installation Guide](https://www.student.cs.uwaterloo.ca/~cs350/common/Install_on_Linux.html)
- [sys161 Simulator](https://www.student.cs.uwaterloo.ca/~cs350/common/Sys161.html)
- [OS/161 Project](https://www.student.cs.uwaterloo.ca/~cs350/)
- [Docker Multi-Stage Builds](https://docs.docker.com/build/building/multi-stage/)
