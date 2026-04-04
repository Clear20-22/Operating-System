# Mac Setup Guide: Fork and Clone This OS/161 Repository

This guide is for another Mac user who wants to work on this project from their own device and GitHub account.

Bangla + English style রাখা হয়েছে যেন first-time user-দের জন্য follow করা সহজ হয়.

## 1) What You Will Do (Big Picture)

You will:

1. Create your own copy of this repo on GitHub (Fork)
2. Download that copy to your Mac (Clone)
3. Connect the original repo as `upstream`
4. Install required tools (Git + Docker Desktop)
5. Run the OS/161 container environment

Conceptually:

- `origin` = your fork (your GitHub repo)
- `upstream` = original source repo (main repo you forked from)

এভাবে কাজ করলে তুমি নিজের branch এ safe ভাবে কাজ করতে পারবে, এবং দরকার হলে original repo থেকে latest update pull করতে পারবে.

## 2) Prerequisites

Before starting, ensure you have:

- A GitHub account
- macOS Terminal access
- Stable internet
- Around 20+ GB free disk space (toolchain/build files can be large)

## 3) Install Required Tools on macOS

### 3.1 Install Git (if not already installed)

Run:

```bash
git --version
```

If Git is missing, macOS usually prompts to install Xcode Command Line Tools. Accept it and wait.

### 3.2 Install Docker Desktop

- Download Docker Desktop for Mac from Docker official site
- Install and open Docker Desktop once
- Confirm it is running

Check from Terminal:

```bash
docker --version
docker compose version
```

## 4) Fork the Repository on GitHub

1. Open the original repository page on GitHub
2. Click `Fork` (top-right)
3. Choose your account as destination
4. Wait until fork is created

Now you have your own copy like:

`https://github.com/<your-username>/<repo-name>`

## 5) Choose Authentication Method (HTTPS or SSH)

You can clone with either method.

### Option A: HTTPS (easy for beginners)

- Clone URL looks like:
  - `https://github.com/<your-username>/<repo-name>.git`

You may need PAT (Personal Access Token) instead of password when pushing.

### Option B: SSH (recommended for regular use)

#### Create SSH key (if needed)

```bash
ssh-keygen -t ed25519 -C "your-email@example.com"
```

Press Enter for default path. Then start ssh-agent and add key:

```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```

Copy public key:

```bash
pbcopy < ~/.ssh/id_ed25519.pub
```

Then add it to GitHub:

- GitHub -> Settings -> SSH and GPG keys -> New SSH key

Test:

```bash
ssh -T git@github.com
```

## 6) Clone Your Fork to Mac

Open Terminal and go to your workspace folder:

```bash
cd ~/Documents/GitHub
```

Clone your fork:

```bash
git clone <your-fork-url>
cd <repo-name>
```

Example (HTTPS):

```bash
git clone https://github.com/<your-username>/<repo-name>.git
```

Example (SSH):

```bash
git clone git@github.com:<your-username>/<repo-name>.git
```

## 7) Add Original Repository as Upstream

After cloning your fork, set upstream:

```bash
git remote add upstream <original-repo-url>
```

Check remotes:

```bash
git remote -v
```

Expected idea:

- `origin` -> your fork
- `upstream` -> original repo

## 8) First Sync from Upstream

When you want latest changes from original repo:

```bash
git fetch upstream
git checkout main
git merge upstream/main
```

If your default branch is `master`, replace `main` with `master`.

Then push updated branch to your fork:

```bash
git push origin main
```

## 9) Build and Run the Docker Environment

From repo root:

```bash
docker build --platform linux/amd64 -t os161-env:saved .
docker compose up -d
docker compose exec os161 bash
```

Why `linux/amd64`?

- Older OS/161 toolchain works more reliably with amd64 image compatibility.

Stop environment when done:

```bash
docker compose down
```

## 10) Suggested Daily Git Workflow

Create a feature branch:

```bash
git checkout -b feature/<short-name>
```

Work, then commit:

```bash
git add .
git commit -m "Describe your change"
```

Push branch:

```bash
git push -u origin feature/<short-name>
```

Open Pull Request from your fork branch.

## 11) Troubleshooting

### Problem: `permission denied (publickey)`

Meaning: SSH key setup incomplete.

Fix:

- Add correct public key to GitHub
- Ensure `ssh-add ~/.ssh/id_ed25519` done
- Test again with `ssh -T git@github.com`

### Problem: Docker not running

Fix:

- Open Docker Desktop app
- Wait until status is healthy
- Retry `docker compose up -d`

### Problem: Cannot push over HTTPS

Fix:

- Use GitHub Personal Access Token (PAT) instead of password
- Or switch to SSH remote URL

### Problem: Upstream not found

Fix:

```bash
git remote -v
git remote remove upstream
git remote add upstream <correct-original-repo-url>
```

## 12) Quick Command Checklist

```bash
# clone fork
git clone <your-fork-url>
cd <repo-name>

# connect original repo
git remote add upstream <original-repo-url>
git remote -v

# sync latest
git fetch upstream
git checkout main
git merge upstream/main
git push origin main

# run environment
docker build --platform linux/amd64 -t os161-env:saved .
docker compose up -d
docker compose exec os161 bash
```

## 13) For Sharing With Another Mac User

If you are sending this guide to a classmate/team member, ask them to share these after setup:

1. `git remote -v` output
2. `docker --version` and `docker compose version`
3. confirmation that `docker compose exec os161 bash` works

এগুলো পেলে quickly বোঝা যায় setup successful হয়েছে কিনা.

---

If you want, add your actual GitHub URLs in this file before sharing so the person can copy-paste directly.
