# How to Share OS/161 Docker Image

There are several ways to share the Docker image with classmates:

## Option 1: Docker Hub (Easiest - Recommended)

### Step 1: Create Docker Hub Account
1. Go to https://hub.docker.com
2. Sign up (free)
3. Verify email

### Step 2: Login to Docker

```bash
docker login
# Enter your username and password
```

### Step 3: Tag Your Image

```bash
# Format: docker tag SOURCE_IMAGE USERNAME/REPOSITORY:TAG
docker tag os161-env:latest yourusername/os161-env:latest
```

### Step 4: Push to Docker Hub

```bash
docker push yourusername/os161-env:latest
```

**Takes 5-10 minutes** (uploads 659MB)

### Step 5: Share with Classmates

Give them this command:
```bash
docker pull yourusername/os161-env:latest
```

Then they use it:
```bash
docker tag yourusername/os161-env:latest os161-env:latest
```

---

## Option 2: Save as File & Share

### Step 1: Save Image to File

```bash
docker save os161-env:latest -o os161-env-latest.tar.gz
```

**Creates file:** ~659MB

### Step 2: Share the File

- **GitHub:** Upload to repo (need Git LFS for large files)
- **Google Drive:** Upload and share link
- **Dropbox:** Upload and share link
- **USB Drive:** Copy file directly
- **Email:** Too large (don't do this)

### Step 3: Classmates Load Image

```bash
docker load -i os161-env-latest.tar.gz
```

---

## Option 3: Share Just the Configuration

### Instead of sharing the image, share:

1. **Dockerfile** (4.2KB)
2. **docker-compose.yml** (774B)
3. **Makefile** (3.4KB)
4. **.dockerignore** (59B)
5. **setup-assignments.sh** (3.4KB)

Then classmates build locally:
```bash
make setup
```

**Pros:** Small files, uses their own system
**Cons:** Takes 30-40 minutes to build

---

## Option 4: Share Everything on GitHub

### Step 1: Create GitHub Repo

```bash
cd /Users/jubayerahmedsojib/Desktop/OS
git init
git add .
git commit -m "OS/161 Docker development environment"
git remote add origin https://github.com/yourusername/os161-docker.git
git push -u origin main
```

### Step 2: Add to .gitignore

```bash
# Don't commit tar files or large directories
echo "*.tar" >> .gitignore
echo "os161-source/" >> .gitignore
echo ".env" >> .gitignore
```

### Step 3: Share GitHub Link

Classmates clone:
```bash
git clone https://github.com/yourusername/os161-docker.git
cd os161-docker
make setup
```

---

## Recommended Method: Docker Hub + GitHub

**Best of both worlds:**

### For Classmates Who Want Quick Setup:
```bash
docker pull yourusername/os161-env:latest
docker tag yourusername/os161-env:latest os161-env:latest
cd /path/to/project
make up
```

### For Classmates Who Want to Build:
```bash
git clone https://github.com/yourusername/os161-docker.git
cd os161-docker
make setup
```

---

## Step-by-Step: Docker Hub (Recommended)

### 1. Create Docker Hub Account
```
https://hub.docker.com → Sign Up → Verify Email
```

### 2. Login
```bash
docker login
Username: yourusername
Password: yourpassword
```

### 3. Tag Image
```bash
docker tag os161-env:latest yourusername/os161-env:latest
```

### 4. Push to Hub
```bash
docker push yourusername/os161-env:latest
```

Wait for upload (5-10 min)...

### 5. Share This Command with Classmates
```bash
docker pull yourusername/os161-env:latest
docker tag yourusername/os161-env:latest os161-env:latest
cd /Users/path/to/your/project
make up
```

---

## Comparison Table

| Method | Size | Speed | Setup | Cost |
|--------|------|-------|-------|------|
| **Docker Hub** | 659MB | Fast | 5 min | Free |
| **Save File** | 659MB | Slow | 10 min | Free |
| **GitHub** | 4KB (config only) | Very slow | 40 min | Free |
| **USB Drive** | 659MB | Instant | 2 min | Free |

---

## For Your Assignment Team

**Quickest way to share with 2-3 classmates:**

```bash
# You
docker tag os161-env:latest yourusername/os161-env:latest
docker push yourusername/os161-env:latest

# Classmates
docker pull yourusername/os161-env:latest
docker tag yourusername/os161-env:latest os161-env:latest
cd /Users/their-path/Desktop/OS
make up
```

---

## Example: Sharing via Docker Hub

```bash
# Your machine
$ docker login
Username: john_doe
Password: *****

$ docker tag os161-env:latest john_doe/os161-env:latest
$ docker push john_doe/os161-env:latest

# Tell classmates:
# "Run this: docker pull john_doe/os161-env:latest"

# Their machine
$ docker pull john_doe/os161-env:latest
$ docker tag john_doe/os161-env:latest os161-env:latest

# Now they can use it:
$ make up
$ make build-asst2
```

---

## Notes

- **Docker Hub is free** for public images
- **Private images** require paid plan ($5/month)
- **659MB download** takes 2-3 minutes on good internet
- **No credit card needed** for free tier
- **Image can be huge:** Keep Docker Hub private if concerned about space

---

## Verification After Sharing

Classmate verifies received image:

```bash
# Check image exists
docker images | grep os161-env

# Test it works
docker run --rm os161-env:latest cs350-gcc --version
docker run --rm os161-env:latest sys161 --version
```

Should output toolchain versions.

---

## Share Complete Project (Recommended)

Share on GitHub with instructions:

```bash
# Clone
git clone https://github.com/yourusername/os161-docker.git

# Setup
cd os161-docker
make setup    # Takes 30 min, builds image

# Use
make up && make shell
nano os161-source/kern/main/main.c
make build-asst2
make run-kernel
```

---

## TL;DR - Fastest Way

1. Create Docker Hub account (free)
2. `docker login`
3. `docker tag os161-env:latest yourname/os161-env:latest`
4. `docker push yourname/os161-env:latest`
5. Tell classmates: `docker pull yourname/os161-env:latest`

Done! They have your image in 5 minutes.
