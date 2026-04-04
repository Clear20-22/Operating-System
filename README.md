# Operating System Lab (OS/161 + Docker)

This repository contains an OS/161 development environment and source tree configured to run inside Docker. It includes the OS/161 codebase, System/161 simulator, and cross-toolchain sources needed for CS350-style workflows.

For onboarding another macOS user (fork + clone + setup), see:

- `MAC_FORK_CLONE_SETUP_GUIDE.md`

## Goals

- Work on OS/161 kernel assignments in a reproducible environment
- Keep all OS/161 sources in the local repository
- Build and run OS/161 from a Docker container
- Persist source changes on host through bind mounts

## Repository Layout

Top-level files:

- `Dockerfile`: Builds a full OS/161 toolchain image (`os161-env:saved`)
- `docker-compose.yml`: Starts a development container with bind-mounted source
- `README.md`: Project documentation

Source bundle directory:

- `os161/os161-1.99/`: OS/161 kernel and userland source
- `os161/sys161-1.99.06/`: System/161 simulator source
- `os161/binutils-2.17+os161-2.0.1/`: binutils source
- `os161/gcc-4.1.2+os161-2.0/`: cross GCC source
- `os161/gdb-6.6+os161-2.0/`: GDB source
- `os161/bmake/`: bmake source
- `os161/mk/`: bmake mk files

## Environment Design

- Image: contains toolchain + simulator build environment
- Container: interactive shell for development
- Bind mount: `./os161` on host is mounted to `/root/cs350-os161` in container

This means source changes made in container are reflected on host immediately.

## Prerequisites

- Docker Desktop (or Docker Engine + Compose)
- macOS/Linux terminal access

## Build Image

From repository root:

```bash
docker build --platform linux/amd64 -t os161-env:saved .
```

Notes:

- `linux/amd64` is recommended on Apple Silicon for compatibility with older OS/161 toolchain components.
- Rebuilding updates the image tag; it does not automatically restart running containers.

## Start Development Container

```bash
docker compose up -d
docker compose exec os161 bash
```

Stop when done:

```bash
docker compose down
```

## First-Time Kernel Build (ASST0)

Inside container:

```bash
cd /root/cs350-os161/os161-1.99
./configure
cd kern/conf
./config ASST0
cd ../compile/ASST0
bmake depend
bmake
bmake install
```

This installs:

- `/root/cs350-os161/root/kernel-ASST0`
- symlink `/root/cs350-os161/root/kernel` -> `kernel-ASST0`

## Run OS/161

Inside container:

```bash
cd /root/cs350-os161/root
cp -n /root/sys161/share/examples/sys161/sys161.conf.sample ./sys161.conf
sys161 kernel
```

At prompt:

- `?` shows menu
- `q` shuts down simulator

## Build User Programs

### Recommended: `user/my-testbin`

Add custom user programs under:

- `os161/os161-1.99/user/my-testbin/<program>/`

Then build/install from OS/161 root:

```bash
cd /root/cs350-os161/os161-1.99
bmake
bmake install
```

Run from kernel menu:

```text
p /my-testbin/<program>
```

### Also enabled in this repo: `user/test`

`user/test` is configured for a `hello` program and can be built through normal top-level `bmake` workflow.

Run from kernel menu:

```text
p /test/hello
```

## Common Pitfalls

- `bmake: no system rules (sys.mk)`
  - Ensure compose environment is active and use provided `docker-compose.yml`.

- `sys161: Cannot open config file sys161.conf`
  - Run from `/root/cs350-os161/root` and create/copy `sys161.conf`.

- `Command not found` at `OS/161 kernel` prompt
  - That prompt is kernel menu, not Unix shell. Use menu commands (`?`, `q`, `p ...`).

- `warning: no newline at end of file` with `-Werror`
  - Add a trailing newline to the C source file.

## Daily Workflow

```bash
# host
docker compose up -d
docker compose exec os161 bash

# container
cd /root/cs350-os161/os161-1.99
bmake
bmake install
cd /root/cs350-os161/root
sys161 kernel
```

## Academic Use

This repository is intended for coursework, lab practice, and OS/161 experimentation.

## Author

Jubayer Ahmed Sojib
