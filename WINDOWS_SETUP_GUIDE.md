# OS/161 Development Environment - Windows Setup Guide

This guide helps you set up OS/161 development on **Windows** using Docker Desktop.

---

## 📋 Prerequisites

Before starting, you need:

- **Windows 10/11** (Pro, Enterprise, or Home with latest updates)
- **Docker Desktop for Windows** (version 4.0 or higher)
- **Git for Windows** (optional, but recommended)
- **WSL 2 (Windows Subsystem for Linux 2)** - required by Docker Desktop
- **At least 4GB RAM** available
- **At least 10GB disk space** free

---

## 🚀 Step 1: Install Prerequisites on Windows

### 1A. Install Docker Desktop for Windows

1. Download Docker Desktop from: https://www.docker.com/products/docker-desktop
2. Run the installer and follow the prompts
3. When asked about WSL 2, select **"Install WSL 2"** (Docker will do this automatically)
4. Restart your computer when prompted
5. Docker Desktop will start automatically

**Verify Docker installation:**
- Open **PowerShell** or **Command Prompt**
- Run: `docker --version`
- You should see: `Docker version 29.x.x`

### 1B. Install Git for Windows (Recommended)

1. Download from: https://git-scm.com/download/win
2. Use default settings during installation
3. Restart your computer

**Verify Git installation:**
- Open **PowerShell** or **Command Prompt**
- Run: `git --version`
- You should see: `git version 2.x.x`

### 1C. Increase Docker Resources (Important!)

1. Open **Docker Desktop**
2. Click ⚙️ **Settings** (bottom right)
3. Go to **Resources**
4. Set:
   - **CPU:** At least 4 cores
   - **Memory:** At least 4GB
   - **Disk image size:** At least 50GB
5. Click **Apply & Restart**
6. Wait for Docker to restart

---

## 📥 Step 2: Get the Repository

### Option A: Clone via Git (Recommended)

1. Open **PowerShell** or **Command Prompt**
2. Navigate to where you want the project:
   ```powershell
   cd C:\Users\YourUsername\Documents
   ```
3. Clone the repository:
   ```powershell
   git clone https://github.com/YOUR_USERNAME/Operating-System.git
   cd "Operating System"
   ```

### Option B: Download as ZIP

1. Go to the GitHub repository
2. Click **Code** → **Download ZIP**
3. Extract to: `C:\Users\YourUsername\Documents\Operating System`
4. Open **PowerShell** and navigate there:
   ```powershell
   cd "C:\Users\YourUsername\Documents\Operating System"
   ```

---

## 🐳 Step 3: Get the Pre-Built Docker Image

You have **two options**:

### Option A: Pull Pre-Built Image (FASTEST - Recommended)

If a pre-built image is available on Docker Hub:

```powershell
docker pull s0jib/os161-env:latest
```

Then skip to **Step 4: Configure for Windows**.

**Pros:**
- ✅ Takes 5-10 minutes
- ✅ No build required
- ✅ Ready to use immediately

**Cons:**
- ❌ Depends on internet speed

### Option B: Build Image Locally

If you have the tar files (`os161-*.tar` and `sys161-*.tar`):

1. Download/copy all 7 tar files to the project directory:
   ```
   C:\Users\YourUsername\Documents\Operating System\OS161\
   ```

2. Make sure these files exist:
   - `os161-1.99.05-UWF16.tar`
   - `os161-binutils.tar`
   - `os161-gcc.tar`
   - `os161-gdb.tar`
   - `os161-bmake.tar`
   - `os161-mk.tar`
   - `sys161-1.99.06-no-hang.tar`

3. Build the image (takes 30-40 minutes):
   ```powershell
   cd "C:\Users\YourUsername\Documents\Operating System\OS161"
   docker build -t os161-env:latest .
   ```

**Pros:**
- ✅ Works offline after building
- ✅ Full control over build
- ❌ Takes 30-40 minutes
- ❌ Requires tar files

---

## ⚙️ Step 4: Configure for Windows

### 4A. Convert Setup Scripts (Windows Compatibility)

The `setup-assignments.sh` uses Unix line endings. Convert it:

1. Open **PowerShell** as Administrator
2. Navigate to the project:
   ```powershell
   cd "C:\Users\YourUsername\Documents\Operating System\OS161"
   ```
3. Convert line endings:
   ```powershell
   # Install dos2unix if you don't have it
   choco install dos2unix -y
   
   # Convert the script
   dos2unix setup-assignments.sh setup.sh
   ```

**If you don't have Chocolatey:**

Use a text editor to convert manually:
1. Open `setup-assignments.sh` in **Notepad++** or **VS Code**
2. In VS Code: Click **CRLF** (bottom right) → Select **LF**
3. Save the file

### 4B. Create Windows Batch Files (Easier Alternative)

Instead of using Makefile directly, create batch files for Windows:

**Create `setup.bat`:**
```batch
@echo off
echo Running setup...
docker compose up -d os161
docker compose exec os161 bash -c "cd /root/cs350-os161 && /bin/bash setup-assignments.sh"
echo Setup complete!
```

**Create `shell.bat`:**
```batch
@echo off
docker compose exec -it os161 bash
```

**Create `build-asst2.bat`:**
```batch
@echo off
docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST2 && cd ../compile/ASST2 && bmake depend && bmake && bmake install"
echo ASST2 kernel built!
```

Create similar `.bat` files for other assignments by replacing `ASST2` with `ASST0`, `ASST1`, etc.

---

## 🏃 Step 5: First-Time Setup

### 5A. Start the Container

Open **PowerShell** in the OS161 directory and run:

```powershell
docker compose up -d
```

You should see:
```
[+] Running 1/1
 ✓ Container os161-dev  Started
```

### 5B. Run Setup Script

```powershell
docker compose exec os161 bash setup-assignments.sh
```

This will:
- Extract OS/161 source code
- Create assignment directories
- Extract all dependencies
- Take approximately **30-40 minutes**

You'll see output like:
```
Extracting os161 source...
Creating assignment directories...
Done!
```

### 5C. Verify Setup

```powershell
docker compose exec os161 bash -c "sys161 --version"
```

You should see output confirming sys161 is installed.

---

## 💻 Step 6: Daily Workflow on Windows

### Starting Your Work Session

```powershell
# Navigate to project directory
cd "C:\Users\YourUsername\Documents\Operating System\OS161"

# Start the container
docker compose up -d

# Enter the container shell
docker compose exec -it os161 bash
```

### Editing Code

Code is stored locally in `os161-source\` and **automatically syncs** with the container.

**Edit locally using any editor:**
- Visual Studio Code
- Notepad++
- Sublime Text
- Any text editor

**Example:**
```powershell
# Open file in VS Code
code os161-source\kern\main\main.c
```

Changes appear **immediately** in the container.

### Building an Assignment

Inside the container shell:

```bash
# For ASST2 (replace 2 with your assignment number)
cd /root/cs350-os161/os161-1.99/kern/conf
./config ASST2
cd ../compile/ASST2
bmake depend
bmake
bmake install
```

Or use a batch file from PowerShell:
```powershell
# If you created build-asst2.bat
.\build-asst2.bat
```

### Testing the Kernel

Inside the container shell:

```bash
cd /root/cs350-os161
sys161 kernel
```

The kernel should boot and show a menu.

### Stopping Your Work

In **PowerShell**:
```powershell
docker compose down
```

---

## 📂 Windows File Structure

After setup, you'll have:

```
C:\Users\YourUsername\Documents\Operating System\OS161\
│
├── Dockerfile                 (Docker image definition)
├── docker-compose.yml         (Container configuration)
├── Makefile                   (Unix commands - reference only)
├── setup.bat                  (Windows setup - optional)
├── shell.bat                  (Windows shell - optional)
├── build-asst2.bat            (Windows build - optional)
│
├── os161-source/              (EDITABLE - Your code syncs here)
│   └── kern/
│       ├── main/
│       ├── syscall/
│       └── ...
│
├── os161-work/                (Temporary files)
├── assignments/               (Assignment notes)
│   ├── asst0/
│   ├── asst1/
│   ├── asst2/
│   └── ...
│
└── os161-*.tar, sys161-*.tar  (Can delete after setup)
```

---

## 🔧 Windows-Specific Tips

### Using PowerShell (Recommended)

PowerShell is better than Command Prompt for Docker. Use:

```powershell
# Instead of: cd "path"
Set-Location "C:\Users\YourUsername\Documents\Operating System\OS161"

# Instead of: dir
Get-ChildItem

# Tab completion works
docker compose<TAB>
```

### Using Windows Terminal

Install **Windows Terminal** from Microsoft Store for a better experience:
- Built-in PowerShell, Command Prompt, WSL 2 tabs
- Better copy/paste
- Customizable appearance

### Path Separators

Inside containers: Always use `/` (Unix paths)
```bash
cd /root/cs350-os161
```

Outside containers: Use `\` (Windows paths)
```powershell
cd "C:\Users\YourUsername\Documents"
```

### Line Endings

If you get errors like "command not found" or "bad interpreter":
- The file has Windows line endings (CRLF)
- Convert to Unix line endings (LF) using VS Code or dos2unix

---

## 📋 Quick Command Reference for Windows PowerShell

| What You Want | PowerShell Command |
|---|---|
| Navigate to project | `cd "C:\Users\YourUsername\Documents\Operating System\OS161"` |
| Start container | `docker compose up -d` |
| Enter container | `docker compose exec -it os161 bash` |
| Stop container | `docker compose down` |
| View container logs | `docker compose logs -f os161` |
| See all images | `docker images` |
| See all containers | `docker ps -a` |
| Remove old image | `docker rmi os161-env:latest` |
| Clean up Docker | `docker system prune` |

---

## 🐛 Troubleshooting for Windows

### Problem: Docker Desktop won't start
**Solution:**
1. Open Settings → Apps → Programs and Features
2. Find "Windows Subsystem for Linux Update"
3. Click Uninstall → Yes
4. Restart computer
5. Restart Docker Desktop
6. It will reinstall WSL 2 automatically

### Problem: "Cannot find module docker"
**Solution:**
- Close and reopen PowerShell
- Restart Docker Desktop
- Run: `docker ps` to test

### Problem: "Permission denied" when running setup.sh
**Solution:**
- Use `dos2unix` to convert line endings (see Step 4A)
- Or use: `bash setup-assignments.sh` instead of `./setup-assignments.sh`

### Problem: "Disk image size limit"
**Solution:**
1. Open Docker Desktop Settings
2. Go to Resources
3. Increase "Disk image size" to 50GB or more
4. Click Apply & Restart

### Problem: Container uses too much memory
**Solution:**
1. Open Docker Desktop Settings
2. Go to Resources
3. Reduce Memory limit
4. Click Apply & Restart

### Problem: Code changes don't appear in container
**Solution:**
1. Stop container: `docker compose down`
2. Start container: `docker compose up -d`
3. Re-enter shell: `docker compose exec -it os161 bash`

### Problem: "docker: command not found"
**Solution:**
1. Restart PowerShell
2. Restart Docker Desktop
3. Verify installation: `docker --version`

---

## 🔄 Sharing Your Image with Classmates (Windows)

### Step 1: Create Docker Hub Account
- Go to https://hub.docker.com
- Sign up (free account)
- Verify email

### Step 2: Log In to Docker

In PowerShell:
```powershell
docker login
```

Enter your Docker Hub username and password.

### Step 3: Tag Your Image

```powershell
docker tag os161-env:latest YOUR_DOCKER_HUB_USERNAME/os161-env:latest
```

Example:
```powershell
docker tag os161-env:latest s0jib/os161-env:latest
```

### Step 4: Push to Docker Hub

```powershell
docker push YOUR_DOCKER_HUB_USERNAME/os161-env:latest
```

This will upload your image (~659 MB takes 5-10 minutes).

### Step 5: Share with Classmates

Tell them to run:
```powershell
docker pull YOUR_DOCKER_HUB_USERNAME/os161-env:latest
```

Example:
```powershell
docker pull s0jib/os161-env:latest
```

---

## 📚 Additional Resources

### Windows-Specific Docker Docs
- https://docs.docker.com/desktop/install/windows-install/
- https://docs.docker.com/desktop/setup/

### WSL 2 Documentation
- https://learn.microsoft.com/en-us/windows/wsl/install
- https://learn.microsoft.com/en-us/windows/wsl/wsl2-index

### Docker Compose for Windows
- https://docs.docker.com/compose/install/windows/

### OS/161 Official Docs
- https://www.eecs.harvard.edu/~margo/cs109/

---

## ✅ Verification Checklist

After setup, verify everything works:

- [ ] Docker Desktop is installed and running
- [ ] `docker --version` works in PowerShell
- [ ] Repository is cloned/downloaded
- [ ] Docker image is pulled or built
- [ ] `docker compose up -d` starts container
- [ ] `docker compose exec -it os161 bash` enters container
- [ ] `sys161 --version` shows version
- [ ] Files in `os161-source/` sync with container
- [ ] You can build and run kernels

---

## 🎯 Next Steps

1. **Complete Step 5: First-Time Setup** above
2. **Read the assignment guide:** `README\ASSIGNMENT_GUIDE.md`
3. **Try building ASST0:**
   ```powershell
   docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST0 && cd ../compile/ASST0 && bmake depend && bmake && bmake install"
   ```
4. **Test the kernel:**
   ```powershell
   docker compose exec os161 bash -c "cd /root/cs350-os161 && sys161 kernel"
   ```
5. **Start working on your assignment!**

---

## 📞 Getting Help

If you encounter issues:

1. **Check Docker is running:** Look for Docker icon in system tray
2. **Check container logs:** `docker compose logs -f os161`
3. **Restart everything:**
   ```powershell
   docker compose down
   docker compose up -d
   ```
4. **Check disk space:** `docker system df`
5. **Ask classmates or TAs with error message**

---

**You're all set! Happy coding! 🚀**
