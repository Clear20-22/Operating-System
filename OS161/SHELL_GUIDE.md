# Linux Shell Implementation Guide

This guide explains how to compile and use the custom Linux shell program included in your OS/161 Docker environment.

## What is This Shell?

This is an educational implementation of a Linux shell based on the GeeksforGeeks tutorial. It demonstrates:

- **Command parsing** - Breaking input into tokens
- **Process forking** - Creating child processes
- **Pipe handling** - Connecting commands with `|`
- **Built-in commands** - Implementing shell built-ins like `cd`, `exit`, `help`
- **Command history** - Using readline library for history and tab completion
- **Directory tracking** - Showing current working directory

## Prerequisites

The shell program is already in your Docker image with all dependencies installed:
- `libreadline-dev` - For history and autocomplete
- `gcc` - For compilation
- `build-essential` - For compilation

## Compiling the Shell

### Inside the Container

1. Start your container:
   ```bash
   docker compose up -d
   docker compose exec -it os161 bash
   ```

2. Navigate to the shell source:
   ```bash
   cd /root/learning-programs
   ```

3. Compile the shell:
   ```bash
   gcc shell.c -lreadline -o shell
   ```

   - `-lreadline` links the readline library
   - `-o shell` names the output executable `shell`

4. Verify compilation:
   ```bash
   ls -la shell
   ```

   You should see: `-rwxr-xr-x  1 root root  <size>  shell`

## Running the Shell

### Option 1: Run Directly

```bash
./shell
```

You'll see:
```
****MY SHELL****
-USE AT YOUR OWN RISK-

USER is: @root

Dir: /root
>>>
```

Type commands:
```bash
>>> ls
>>> pwd
>>> cd /tmp
>>> echo "Hello from custom shell"
>>> ls | grep shell
>>> help
>>> exit
```

### Option 2: Make it Your Default Shell

```bash
# Copy shell to standard location
cp shell /usr/local/bin/myshell

# Run it anytime
myshell
```

## Supported Commands

### Built-in Commands

| Command | What it does |
|---------|-------------|
| `cd <path>` | Change directory |
| `exit` | Exit the shell |
| `help` | Show help message |
| `hello` | Greet the user |

### External Commands

Any command available in the system:
- `ls` - List files
- `pwd` - Print working directory
- `echo` - Print text
- `grep` - Search text
- `cat` - View files
- `mkdir` - Create directory
- `rm` - Remove files
- And many more...

### Pipe Support

Connect commands with `|`:
```bash
>>> ls | grep .c
>>> cat file.txt | grep "pattern"
>>> ps aux | grep shell
```

## Features

### 1. Command History
- Previous commands stored in history
- Navigate with arrow keys (↑ ↓)
- Search history with Ctrl+R

### 2. Tab Completion
- Press Tab to autocomplete filenames and commands
- Very useful for long file paths

### 3. Current Directory Display
- Shows current working directory before each prompt
- Updates automatically with `cd`

### 4. Error Handling
- Handles invalid commands gracefully
- Handles missing arguments
- Handles pipe errors

## Learning Points

### How the Shell Works

1. **Input Loop** - Continuously reads user input
2. **Parsing** - Splits input by spaces and pipes
3. **Built-in Check** - Checks if command is built-in
4. **Execution** - Either:
   - Executes built-in command (no fork needed)
   - OR forks child process to execute external command
5. **Pipe Handling** - Creates two children with pipe between them
6. **Waiting** - Parent waits for child to finish
7. **Repeat** - Loop back to input

### System Calls Used

| System Call | Purpose |
|------------|---------|
| `fork()` | Create child process |
| `execvp()` | Replace process with command |
| `wait()` | Wait for child process |
| `pipe()` | Create pipe for IPC |
| `dup2()` | Redirect file descriptors |
| `chdir()` | Change directory |
| `getcwd()` | Get current directory |

### Readline Library Features

| Feature | How to use |
|---------|-----------|
| History | Up/Down arrow keys |
| Search | Ctrl+R |
| Autocomplete | Tab key |
| Clear line | Ctrl+U |
| Move cursor | Ctrl+A (home), Ctrl+E (end) |

## Exercises to Learn

### Exercise 1: Add a New Built-in Command

Add `pwd` as a built-in (built-in `pwd` uses `printf` instead of fork):

```c
// In ownCmdHandler(), add:
ListOfOwnCmds[4] = "pwd";

case 5:
    getcwd(cwd, sizeof(cwd));
    printf("\n%s\n", cwd);
    return 1;
```

### Exercise 2: Add Environment Variable Support

Support `$HOME`, `$USER` in commands.

### Exercise 3: Add Redirection

Support output redirection: `ls > output.txt`

### Exercise 4: Add Background Processes

Support running commands in background with `&`:
```bash
>>> long_command &
>>> jobs
```

## Troubleshooting

### Error: "Command not found"
- The command doesn't exist in your system
- Check spelling
- Use `which <command>` to find command location

### Error: "Pipe could not be initialized"
- Pipe system call failed
- Usually due to file descriptor limits
- Rarely happens on modern systems

### Error: "Failed forking child"
- System couldn't create child process
- Usually due to resource limits
- Try closing other containers/processes

### Shell doesn't execute piped commands
- Check spaces: `ls | grep` works, `ls| grep` might not
- Check command spelling
- Ensure both commands exist

## Compiling with Debugging

For debugging with GDB:

```bash
# Compile with debug symbols
gcc -g shell.c -lreadline -o shell

# Run with gdb
gdb ./shell

# Inside gdb:
(gdb) break main
(gdb) run
(gdb) next
```

## Performance Notes

- Shell runs in Linux/Ubuntu container (14.04)
- Suitable for learning, not production
- Simple implementation (no advanced features like job control)
- Good foundation for understanding real shells (bash, zsh)

## Further Learning

Read the actual code:
- **`takeInput()`** - Shows how readline library works
- **`parseSpace()` and `parsePipe()`** - Shows parsing logic
- **`execArgs()`** - Shows simple command execution
- **`execArgsPiped()`** - Shows pipe implementation
- **`ownCmdHandler()`** - Shows built-in command handling

## Next Steps

1. Compile and run: `gcc shell.c -lreadline -o shell && ./shell`
2. Try basic commands: `ls`, `pwd`, `cd`, `ls | grep`
3. Try built-ins: `help`, `hello`, `exit`
4. Read the code and understand each function
5. Modify the shell to add new features
6. Compare with real shell behavior: `bash`

---

**This shell is an excellent learning tool for understanding how Unix/Linux shells work internally!**
