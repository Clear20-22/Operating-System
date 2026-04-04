# Mac Setup Guide: Fork and Clone This OS/161 Repository

This guide is for another Mac user who wants to work on this project from their own device and GitHub account.

Bangla + English style রাখা হয়েছে যেন first-time user-দের জন্য follow করা সহজ হয়.

## 1) Choose One of Two Ways

This guide supports two valid ways. Pick one based on your goal.

Quick decision:

- I want to contribute / make PR -> Choose **Way A (Fork + Clone)**
- I only want local run/practice -> Choose **Way B (Direct Clone)**

বাংলায় সহজভাবে:

- PR বা change submit করতে চাইলে -> **Way A**
- শুধু নিজের Mac এ run/practice করতে চাইলে -> **Way B**

### Way A: Fork + Clone (Best for contributors)

Use this if you want to:

- push your own changes
- open Pull Requests
- keep your repo synced with original repo

Flow:

1. Fork on GitHub
2. Clone your fork
3. Add original repo as `upstream`

### Way B: Direct Clone (Best for read-only or local practice)

Use this if you only want to:

- run/build locally
- test OS/161
- not push code to your own fork

Flow:

1. Clone original repo directly
2. Run locally

বাংলায় সহজভাবে: যদি code submit/PR করতে চাও, Way A নাও. শুধু local practice করলে Way B enough.

### Quick Copy-Paste Examples for Both Choices

Replace placeholders before running:

- `<your-username>` = your GitHub username
- `<repo-name>` = repository name
- `<original-owner>` = original repo owner

Way A example:

```bash
cd ~/Projects
git clone https://github.com/<your-username>/<repo-name>.git
cd <repo-name>
git remote add upstream https://github.com/<original-owner>/<repo-name>.git
git remote -v
```

Way B example:

```bash
cd ~/Projects
git clone https://github.com/<original-owner>/<repo-name>.git
cd <repo-name>
git remote -v
```

## 2) Choose Any Folder on Your Mac (Important)

You do **not** need to use a fixed directory like `~/Documents/GitHub`.

You can clone in any location, for example:

- `~/Documents/GitHub`
- `~/Projects`
- `~/Desktop/lab-work`

Rule is simple:

- after clone, always run commands from inside that repo folder.

বাংলায়:

- same directory থাকা বাধ্যতামূলক না
- যে কোনো folder এ clone করা যাবে
- clone করার পরে project folder এর ভিতরে গিয়ে command run করলেই হবে

Example:

```bash
cd ~/Projects
git clone <repo-url>
cd <repo-name>
docker compose up -d
```

More directory examples (same commands, different starting folder):

```bash
# Option 1: Documents
cd ~/Documents/GitHub
git clone <repo-url>
cd <repo-name>

# Option 2: Projects
cd ~/Projects
git clone <repo-url>
cd <repo-name>

# Option 3: Desktop lab folder
mkdir -p ~/Desktop/lab-work
cd ~/Desktop/lab-work
git clone <repo-url>
cd <repo-name>
```

বাংলায়:

- উপররের ৩টা path এর যেকোনো ১টা নিলেই হবে
- command একই, শুধু প্রথম `cd` line আলাদা

## 3) Prerequisites

Before starting, ensure you have:

- A GitHub account
- macOS Terminal access
- Stable internet
- Around 20+ GB free disk space (toolchain/build files can be large)

## 4) Install Required Tools on macOS

### 4.1 Install Git (if not already installed)

Run:

```bash
git --version
```

If Git is missing, macOS usually prompts to install Xcode Command Line Tools. Accept it and wait.

### 4.2 Install Docker Desktop

- Download Docker Desktop for Mac from Docker official site
- Install and open Docker Desktop once
- Confirm it is running

Check from Terminal:

```bash
docker --version
docker compose version
```

## 5) Authentication Method (HTTPS or SSH)

You can use either method for cloning and pushing.

### Option A: HTTPS (easy for beginners)

- URL example:
  - `https://github.com/<owner>/<repo-name>.git`

For push, GitHub uses PAT (Personal Access Token), not account password.

### Option B: SSH (recommended for regular use)

#### Create SSH key (if needed)

```bash
ssh-keygen -t ed25519 -C "your-email@example.com"
```

Start agent and add key:

```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```

Copy public key:

```bash
pbcopy < ~/.ssh/id_ed25519.pub
```

Add key to GitHub:

- GitHub -> Settings -> SSH and GPG keys -> New SSH key

Test:

```bash
ssh -T git@github.com
```

## 6) Way A: Fork + Clone (Contributor Workflow)

### Step A1: Fork on GitHub

1. Open original repository on GitHub
2. Click `Fork`
3. Choose your account
4. Wait until your fork is created

Fork URL example:

`https://github.com/<your-username>/<repo-name>`

### Step A2: Clone your fork to Mac

Open Terminal and go to any folder you prefer:

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

### Step A3: Add original repo as upstream

After cloning your fork, set upstream:

```bash
git remote add upstream <original-repo-url>
```

Check remotes:

```bash
git remote -v
```

Expected setup:

- `origin` -> your fork
- `upstream` -> original repo

### Step A4: Sync latest changes from upstream

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

## 7) Way B: Direct Clone Only (No Fork)

Use this when you only need local build/run and do not need to push to your own fork.

```bash
cd ~/Documents/GitHub
git clone <original-repo-url>
cd <repo-name>
```

Examples:

```bash
# HTTPS
git clone https://github.com/<original-owner>/<repo-name>.git

# SSH
git clone git@github.com:<original-owner>/<repo-name>.git
```

Important note:

- In this way, `origin` points to original repo.
- Usually you cannot push unless you have write access to original repo.
- If later you want PR workflow, create a fork and change remotes.

## 8) Build and Run the Docker Environment (Both Ways)

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

## 9) Suggested Daily Git Workflow

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

Open Pull Request from your fork branch (Way A).

If you are using Way B, keep it local only.

## 10) Troubleshooting

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

### Problem: Push rejected when using Way B

Meaning: you cloned original repo but do not have write access.

Fix:

- follow Way A (`Fork + Clone`) for contribution workflow
- or ask repo owner for write permission

### Problem: Upstream not found

Fix:

```bash
git remote -v
git remote remove upstream
git remote add upstream <correct-original-repo-url>
```

## 11) Quick Command Checklist

```bash
# Way A: fork + clone + upstream
git clone <your-fork-url>
cd <repo-name>
git remote add upstream <original-repo-url>
git fetch upstream
git checkout main
git merge upstream/main
git push origin main

# Way B: direct clone
cd ~/Documents/GitHub
git clone <original-repo-url>
cd <repo-name>

# run environment (both ways)
docker build --platform linux/amd64 -t os161-env:saved .
docker compose up -d
docker compose exec os161 bash
```

## 12) For Sharing With Another Mac User

If you are sending this guide to a classmate/team member, ask them to share these after setup:

1. `git remote -v` output
2. `docker --version` and `docker compose version`
3. confirmation that `docker compose exec os161 bash` works

এগুলো পেলে quickly বোঝা যায় setup successful হয়েছে কিনা.

---

If you want, add your actual GitHub URLs in this file before sharing so the person can copy-paste directly.
