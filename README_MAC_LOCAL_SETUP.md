# OS161 Local Setup on Mac (Simple Guide)

এই guide তাদের জন্য, যারা শুধু নিজের Mac এ project setup করে run করতে চায়.


## কে এই guide follow করবে

এই guide follow করো যদি:

- তুমি শুধু নিজের Mac এ run/build করতে চাও
- local practice করতে চাও
- এখনই GitHub contribution দরকার নেই

## কী লাগবে

- MacBook or iMac (macOS)
- Internet connection
- কমপক্ষে 20 GB free space
- Docker Desktop
- Git

## Step 1: Git আছে কি না দেখো

টার্মিনালে চালাও:

```bash
git --version
```

যদি Git না থাকে, macOS Xcode Command Line Tools install করতে বলবে. সেটি install করো.

## Step 2: Docker Desktop install করো

1. Docker Desktop for Mac install করো
2. App open করে running অবস্থায় রাখো
3. টার্মিনালে verify করো:

```bash
docker --version
docker compose version
```

## Step 3: নিজের পছন্দের folder বেছে নাও

একই path লাগবে না. যেকোনো folder ব্যবহার করা যাবে.

উদাহরণ:

- ~/Projects
- ~/Documents/GitHub
- ~/Desktop/lab-work

## Step 4: Repository clone করো (direct clone)

টার্মিনালে:

```bash
cd ~/Projects
git clone <original-repo-url>
cd <repo-name>
```

Example:

```bash
git clone https://github.com/<original-owner>/<repo-name>.git
```

Note:

- এখানে fork লাগবে না
- local setup এর জন্য direct clone enough

## Step 5: Docker environment build + start

Repository root এ থেকে চালাও:

```bash
docker build --platform linux/amd64 -t os161-env:saved .
docker compose up -d
docker compose exec os161 bash
```

`linux/amd64` ব্যবহার করা হয়েছে compatibility এর জন্য (OS/161 old toolchain).

## Step 6: কাজ শেষ হলে container stop করো

```bash
docker compose down
```

## Optional: First kernel build (inside container)

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

## Optional: Run OS/161 (inside container)

```bash
cd /root/cs350-os161/root
cp -n /root/sys161/share/examples/sys161/sys161.conf.sample ./sys161.conf
sys161 kernel
```

## Quick Troubleshooting

### Docker command কাজ করছে না

- Docker Desktop open আছে কি না দেখো
- তারপর আবার command চালাও

### `docker compose` not found

- Docker Desktop update করো
- terminal restart করে আবার check করো

### Clone করতে error

- repo URL ঠিক আছে কি না দেখো
- internet connection check করো

### Push করতে পারছ না

- এই guide local setup only
- push দরকার হলে fork workflow follow করতে হবে

## One-screen Quick Start

```bash
# 1) choose any folder
cd ~/Projects

# 2) clone
git clone https://github.com/<original-owner>/<repo-name>.git
cd <repo-name>

# 3) build and run
docker build --platform linux/amd64 -t os161-env:saved .
docker compose up -d
docker compose exec os161 bash

# 4) stop when done
docker compose down
```
