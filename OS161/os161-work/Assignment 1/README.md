# Assignment 1: Custom Shell (C)

This project implements a small custom shell in C for OS assignment work.

Bangla summary: Ei shell ta keyboard theke command nei, parse kore, execute kore, terminal e output dekhay.

## 1) Implemented Requirements

### I. Basic Shell

- Accepts user command input from keyboard (`fgets` loop)
- Parses command into tokens/arguments
- Executes command
- Prints command output in terminal

### II. Required Commands (Manually Implemented)

- `pwd` - print current directory
- `ls` - list directory entries (`-a`, `-l`, `-al`, `-la` supported)
- `cd` - change directory (builtin)
- `mkdir` - create directory
- `touch` - create file
- `rm` - remove file / empty directory
- `cp` - copy file
- `mv` - move/rename file
- `cat` - show file content
- `echo` - print text (builtin)

### III. Built-in Commands

- `cd`
- `echo`
- `exit`

### IV. Optional Enhancements Included

- Command arguments support (example: `ls -l`)
- Error handling for invalid command/invalid path/missing args
- Continuous command execution loop

### V. Bonus Features Included

- I/O redirection: `<`, `>`, `>>`
- Background execution: `&`

## 2) System-Call Usage

The shell does not rely on `system()` for command execution.

It uses:

- `fork()`
- `execvp()`
- `waitpid()`
- file APIs (`open`, `read`, `write`, `close`, `dup2`, `mkdir`, `unlink`, `rename`, etc.)

## 3) Source Files

- `shell.c` - entry point (`main`)
- `commands.c` - shell loop, parser, command handlers
- `shellTalk.c` - banner/help/goodbye text
- `function.h`, `package.h` - declarations and includes

## 4) How To Compile and Run

### Option A: Using script

```sh
sh run.sh
```

### Option B: Manual compile

```sh
gcc shell.c commands.c shellTalk.c -o shell
./shell
```

## 5) Sample Commands To Test

```sh
pwd
ls -l
mkdir demo
cd demo
touch a.txt
echo hello world > a.txt
cat a.txt
cp a.txt b.txt
mv b.txt c.txt
rm c.txt
cd ..
rm demo
exit
```

## 6) Deliverables Checklist

- [x] C source code file(s) (`.c`)
- [x] Shell script for compile/run (`run.sh`)
- [x] README with compile/run/features

## 7) Notes

- `cd` is implemented as builtin so directory change persists in the shell process.
- External commands are supported through `fork + execvp` when command is not one of the implemented built-ins/manual commands.

#### `exec_external(struct parsed_cmd *cmd)`

Runs commands that are not built into the shell.

What it does:

- creates a child process with `fork()`
- applies redirection with `open()` + `dup2()` (if requested)
- the child calls `execvp()`
- the parent waits using `waitpid()` unless the command ends with `&`
- returns the child’s exit status

Teaching point:

- This is one of the most important OS ideas in the project.
- `fork()` creates a new process.
- `execvp()` replaces the child process image with another program.
- `waitpid()` lets the parent wait for completion.
- `dup2()` is the core syscall behind redirection.

---

### `function.h`

This header file shares function declarations across source files.

Why it exists:

- prevents repeated prototype declarations
- keeps source files synchronized
- allows `shell.c`, `shellTalk.c`, and `commands.c` to call each other safely

Currently declared functions:

- `greatings()`
- `goodbye()`
- `help()`
- `shell()`

---

## Why `cd` Is a Built-In

This is an important OS concept.

`cd` changes the current working directory of the shell process itself. If the shell ran `cd` as a separate external program, only that child process would change directories and then exit. The parent shell would stay in the same directory.

So `cd` must be handled inside the shell.

বাংলায়:

`cd` আলাদা process হিসেবে চালালে shell-এর নিজের directory change হবে না। তাই `cd` must be a built-in command.

---

## Built-In Commands vs External Commands

### Built-in commands

These are handled directly by the shell code:

- `help`
- `exit`
- `pwd`
- `ls`
- `cd`
- `mkdir`
- `touch`
- `rm`
- `cp`
- `mv`
- `cat`
- `echo`

### External commands

If the shell does not recognize the command, it tries to run it using:

- `fork()`
- `execvp()`
- `waitpid()`

That means programs already installed in the system can still be launched from the shell.

---

## Teaching Goals of This Code

This project teaches the following OS and systems-programming ideas:

1. Process creation with `fork()`
2. Program replacement with `execvp()`
3. Parent-child synchronization with `waitpid()`
4. File descriptors and I/O with `open()`, `read()`, `write()`, and `close()`
5. Directory handling with `opendir()`, `readdir()`, and `closedir()`
6. Working directory control with `getcwd()` and `chdir()`
7. File manipulation with `mkdir()`, `unlink()`, `rmdir()`, and `rename()`
8. Basic tokenization and parsing (manual tokenizer)
9. Modular C design using separate source files and shared headers
10. I/O redirection with `dup2()`
11. Background execution + reaping with `waitpid(..., WNOHANG)`

---

## How To Build And Run

Use the helper script:

```sh
./run.sh
```

`run.sh` runs `./shell` only when it detects an interactive terminal; otherwise it just builds.

If you want to build manually:

```sh
gcc shell.c commands.c shellTalk.c -o shell
```

Then run:

```sh
./shell
```

---

## Example Session (Sample)

```text
❯ help

Available commands:
  help  - Show this help message
  exit  - Exit the shell

Manually implemented commands:
  pwd   - Print current working directory
  ls    - List directory contents
  cd    - Change directory
  mkdir - Create directory
  touch - Create file
  rm    - Remove file (or empty directory)
  cp    - Copy file
  mv    - Move/Rename file
  cat   - Display file contents
  echo  - Print text

❯ pwd
/work/Assignment 1

❯ echo hello > out.txt
❯ cat < out.txt
hello

❯ sleep 1 &
[bg] 12345

❯ exit
The terminal ends, but the journey continues.
System safely shut down.
```

---

## Notes For You As A Learner

If you are studying this for OS class, focus on these ideas first:

- The shell is just a loop that reads and interprets text.
- Built-in commands are needed when the shell must change its own state.
- External commands require separate processes.
- File and directory operations are the core of OS interaction.
- Good code separation makes systems programs easier to understand.

---

## সংক্ষেপে বাংলায়

এই project-এ একটি simple shell বানানো হয়েছে।

- `shell.c` শুধু program start করে
- `commands.c` command read/parse/execute করে
- `shellTalk.c` banner, help, goodbye দেখায়
- `function.h` shared function declaration রাখে

এখানে তুমি শিখছো:

- process কীভাবে তৈরি হয়
- command line কীভাবে parse হয়
- file এবং directory কীভাবে manage হয়
- কেন কিছু command built-in হয়
- কেন `fork()` এবং `execvp()` shell-এর জন্য গুরুত্বপূর্ণ

---

## Final Thought

This shell is not just a program. It is a small model of how operating systems and command interpreters work.

You are learning how a text command becomes an action, how the shell stays in control, and how the OS provides the low-level tools that make everything happen.
