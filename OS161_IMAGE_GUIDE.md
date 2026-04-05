# OS/161 Docker Image Complete Guide

## Image Information

**Image Name:** `os161-env:saved`  
**Image ID:** `c2a7a1147b77`  
**Disk Usage:** 1.62GB (on disk)  
**Content Size:** 359MB (compressed)  
**Platform:** linux/amd64  
**Base OS:** Ubuntu 14.04  
**Working Directory:** `/root/cs350-os161`  

---

## What's Inside the Image

### 1. **MIPS Cross-Compiler Toolchain** (`/root/sys161/tools/bin/`)
- **Binutils 2.17+os161-2.0.1** (120MB)
  - Assembler (`as`), Linker (`ld`), Binary utilities (ar, nm, objdump, etc.)
  - Target: mips-harvard-os161
  
- **GCC 4.1.2+os161-2.0** (36.1MB)
  - C cross-compiler for MIPS Harvard
  - Generates MIPS bytecode from C source
  
- **GDB 6.6+os161-2.0** (4.36MB)
  - Debugger for MIPS Harvard architecture
  - Includes gdb, gdbtui, sim, bfd libraries

- **bmake** (4.21MB)
  - Build system for OS/161
  - mk files installed to `/root/sys161/tools/share/mk`

### 2. **sys161 Simulator** (`/root/sys161/bin/`)
- **sys161-1.99.06** (651KB executable)
  - MIPS emulator that simulates hardware
  - Runs compiled OS/161 kernels
  - Utilities: hub161, stat161, trace161
  - Config: `/root/sys161/sys161.conf`

### 3. **OS/161 Source Code** (`/root/cs350-os161/os161-1.99/`)
- Complete OS/161 source tree (4.5MB)
- Ready to configure and build
- Contains: kernel, libc, test programs, build infrastructure

### 4. **cs350-* Symlinks** (`/root/sys161/bin/`)
```
cs350-gcc      → /root/sys161/tools/bin/mips-harvard-os161-gcc
cs350-gdb      → /root/sys161/tools/bin/mips-harvard-os161-gdb
cs350-as       → /root/sys161/tools/bin/mips-harvard-os161-as
cs350-ld       → /root/sys161/tools/bin/mips-harvard-os161-ld
cs350-ar       → /root/sys161/tools/bin/mips-harvard-os161-ar
cs350-nm       → /root/sys161/tools/bin/mips-harvard-os161-nm
cs350-objdump  → /root/sys161/tools/bin/mips-harvard-os161-objdump
cs350-ranlib   → /root/sys161/tools/bin/mips-harvard-os161-ranlib
cs350-readelf  → /root/sys161/tools/bin/mips-harvard-os161-readelf
cs350-objcopy  → /root/sys161/tools/bin/mips-harvard-os161-objcopy
cs350-size     → /root/sys161/tools/bin/mips-harvard-os161-size
cs350-strings  → /root/sys161/tools/bin/mips-harvard-os161-strings
cs350-strip    → /root/sys161/tools/bin/mips-harvard-os161-strip
bmake          → /root/sys161/tools/bin/bmake
```

### 5. **Runtime Dependencies**
- libc6, libncurses5, zlib1g (for running tools)
- perl, python (for build scripts)
- vim, nano (editor convenience)

### 6. **Build Artifacts (Not Removed)**
- All source files used during compilation (~200MB+)
- Build dependencies (gcc, make, bison, flex, texinfo, etc.)
- Object files (.o files)

---

## Environment Variables

```bash
PATH=/root/sys161/bin:/root/sys161/tools/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
OS161_HOME=/root/sys161
TOOLDIR=/root/sys161/tools
MAKESYSPATH=/root/sys161/tools/share/mk
DEBIAN_FRONTEND=noninteractive
```

---

## How to Run the Image

### 1. **Interactive Shell**
```bash
docker run -it --rm os161-env:saved
```
Starts a bash shell in `/root/cs350-os161` where you can:
- Edit OS/161 source
- Run build commands
- Test and debug

### 2. **Single Command Execution**
```bash
# Check GCC version
docker run -it --rm os161-env:saved cs350-gcc --version

# Check sys161 version
docker run -it --rm os161-env:saved sys161 --version

# Check bmake
docker run -it --rm os161-env:saved bmake --version
```

### 3. **With Volume Mount (Recommended for Development)**
```bash
docker run -it --rm \
  -v $(pwd)/os161:/root/cs350-os161/os161-1.99 \
  os161-env:saved
```
This mounts your local `os161` directory to the container, allowing you to:
- Edit code on your host machine
- Build inside the container
- Sync changes automatically

### 4. **Using Docker Compose**
```yaml
version: '3'
services:
  os161:
    image: os161-env:saved
    platform: linux/amd64
    container_name: os161-dev
    stdin_open: true
    tty: true
    working_dir: /root/cs350-os161
    volumes:
      - ./os161:/root/cs350-os161/os161-1.99
```

Then:
```bash
docker compose up -d
docker compose exec os161 bash
docker compose down
```

### 5. **Named Container (Keep Running)**
```bash
# Start
docker run -d --name os161-dev \
  -v $(pwd)/os161:/root/cs350-os161/os161-1.99 \
  os161-env:saved sleep infinity

# Access
docker exec -it os161-dev bash

# Stop
docker stop os161-dev
docker rm os161-dev
```

---

## OS/161 Development Workflow

### Step 1: Configure OS/161
```bash
cd /root/cs350-os161/os161-1.99
./configure --ostree=/root/cs350-os161
```

### Step 2: Build OS/161 Kernel
```bash
cd /root/cs350-os161/compile
bmake depend
bmake
bmake install
```

### Step 3: Run in sys161 Simulator
```bash
cd /root/cs350-os161
sys161 kernel
```

### Step 4: Interact with Kernel
Inside sys161 prompt (`OS/161 kernel [? for help]>`):
```
?               # List available commands
n               # Next instruction
s               # Step into
c               # Continue execution
q               # Quit
```

### Step 5: Debug with GDB (Optional)
```bash
# Terminal 1: Start sys161 in debug mode
cd /root/cs350-os161
sys161 -d kernel

# Terminal 2: Connect GDB debugger
cs350-gdb kernel
(gdb) target remote localhost:9191
(gdb) break main
(gdb) continue
```

---

## Common Commands

### Verify Tools Are Working
```bash
docker run -it --rm os161-env:saved bash -c "\
  echo 'GCC:' && cs350-gcc --version && \
  echo 'GDB:' && cs350-gdb --version && \
  echo 'sys161:' && sys161 --version && \
  echo 'bmake:' && bmake --version"
```

### Check Image Details
```bash
docker inspect os161-env:saved
docker history os161-env:saved
docker images | grep os161
```

### View Image Size Breakdown
```bash
docker system df
docker image inspect os161-env:saved --format='{{.Size}}'
```

---

## Image Size Breakdown

| Component | Size |
|-----------|------|
| Ubuntu 14.04 base | 229MB |
| Build dependencies | 213MB |
| Binutils compilation | 120MB |
| GCC compilation | 36.1MB |
| GDB compilation | 4.36MB |
| bmake + mk | 4.21MB |
| sys161 | 651KB |
| OS/161 source | 4.5MB |
| os161 copied source | 647MB |
| **Total** | **1.62GB** |

---

## Why So Large?

The image retains:
1. **Build tools** (gcc, make, bison, flex, texinfo) — ~213MB
2. **Source files** (binutils, gcc, gdb, bmake, sys161, os161) — ~647MB
3. **Intermediate build files** (.o files, temp files) — ~200MB

You only need the compiled binaries (~100MB) to run OS/161.

---

## How to Reduce Size to ~500MB (Optional)

Use a **multi-stage Dockerfile**:
1. Stage 1: Compile everything (1.6GB+)
2. Stage 2: Copy only compiled binaries to fresh Ubuntu

This removes build tools and intermediate files, reducing size by 60-70%.

---

## Troubleshooting

### Platform Warning
```
WARNING: The requested image's platform (linux/amd64) does not match 
the detected host platform (linux/arm64/v8)
```
**Solution:** Use `--platform linux/amd64` in docker run or set in compose:
```yaml
platform: linux/amd64
```

### Tools Not Found
```bash
docker run -it os161-env:saved which cs350-gcc
```
If not found, check:
```bash
docker run -it os161-env:saved ls -la /root/sys161/bin/
```

### Permission Denied
If you get permission errors on volume mounts:
```bash
docker run -it --user root \
  -v $(pwd)/os161:/root/cs350-os161/os161-1.99 \
  os161-env:saved bash
```

### Out of Disk Space
```bash
docker system prune
docker image prune
```

---

## Summary

- **Image includes:** Complete OS/161 development environment with MIPS toolchain and sys161 emulator
- **Quick start:** `docker run -it os161-env:saved`
- **Development:** Mount local os161 directory with `-v`
- **Size:** 1.62GB (can be reduced to 500MB with multi-stage build)
- **Ready to use:** No additional setup needed
