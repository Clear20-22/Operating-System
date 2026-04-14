# OS161 Shell Assignment 1

A small Unix-like shell written in C for the OS161 assignment.  
This README explains **what the program does**, **how it is structured**, **how each function works**, and **what OS ideas are being taught** by the code.

---

## What This Project Is

This project builds a simple shell program. A shell is a command-line interface that reads what the user types, decides what the command means, and then runs the requested action.

In this implementation, the shell supports:

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
- external programs using `fork()` + `execvp()`

---

## Project Structure

| File          | Purpose                                                |
| ------------- | ------------------------------------------------------ |
| `shell.c`     | Program entry point. Starts the shell.                 |
| `commands.c`  | Main command loop and all command execution logic.     |
| `shellTalk.c` | Startup banner, goodbye message, and help text.        |
| `function.h`  | Shared function declarations used across source files. |
| `package.h`   | System headers needed by the shell code.               |
| `run.sh`      | Build-and-run helper script.                           |

---

## High-Level Flow

The program works like this:

1. `main()` in `shell.c` starts the program.
2. It seeds the random generator with `srand(time(NULL))`.
3. It prints the welcome banner using `greatings()`.
4. It enters the interactive shell loop using `shell()`.
5. The shell reads a line from the user.
6. The input is split into tokens.
7. The shell checks whether the command is built-in.
8. If it is built-in, the matching function runs.
9. If not, the shell tries to launch an external program.
10. When the user types `exit`, `goodbye()` runs and the shell stops.

---

## File-by-File Explanation

### `shell.c`

This file is intentionally small. It only contains `main()`.

#### `main(void)`

This is the entry point of the whole program.

What it does:

- initializes the random seed with the current time
- prints the welcome screen
- starts the shell loop
- returns `0` when the program ends successfully

Why this is good:

- keeps the program entry point simple
- separates startup logic from command logic
- makes the code easier to maintain

---

### `shellTalk.c`

This file contains the user-facing text and presentation layer.

#### `type_text(const char *text)`

This is a helper function used only inside `shellTalk.c`.

What it does:

- prints one character at a time
- waits a tiny amount between characters using `usleep(50000)`
- creates a smooth typing effect

Teaching point:

- This shows how output formatting can be made interactive and user-friendly.
- It is not an OS feature itself, but it improves the shell experience.

#### `greatings(void)`

This function prints the startup banner.

What it does:

- prints a welcome title
- prints ASCII art
- tells the user about `help` and `exit`

Teaching point:

- This demonstrates how a shell can provide a friendly interface before command execution begins.

#### `goodbye(void)`

This function prints the shutdown message when the user exits.

What it does:

- stores a list of goodbye quotes
- picks one quote randomly with `rand()`
- prints the quote using the typing effect
- prints the final shutdown line

Teaching point:

- This demonstrates string arrays, random selection, and controlled output formatting.
- It also shows how a shell can cleanly end a session.

#### `help(void)`

This function prints the command guide.

What it does:

- lists built-in shell commands
- explains what each one does
- tells the user that other commands can be run externally

Teaching point:

- A shell should be discoverable.
- `help()` is a user assistance layer, not command execution logic.

---

### `commands.c`

This file contains the real shell engine.

It handles:

- reading user input
- splitting the input into arguments
- checking for built-in commands
- running internal command functions
- launching external programs

#### `shell(void)`

This is the main interactive loop.

What it does:

- prints the prompt
- reads a command with `fgets()`
- removes the newline character
- ignores empty input
- tokenizes the command
- checks for `exit`
- dispatches built-in commands
- falls back to external execution if needed

Why it matters:

- This is the core of a shell.
- It demonstrates the command cycle: read, parse, decide, execute.

#### `parse_command(char *line, char **argv, int max_args)`

This function splits the user input into words.

What it does:

- uses `strtok()` to break the line on spaces and tabs
- stores pointers to each token in `argv`
- returns the argument count

Example:

```text
cp file1.txt file2.txt
```

Becomes:

- `argv[0] = "cp"`
- `argv[1] = "file1.txt"`
- `argv[2] = "file2.txt"`

Teaching point:

- This is basic command-line parsing.
- A shell must convert raw text into structured arguments before execution.

#### `run_builtin_or_manual(int argc, char **argv)`

This function checks whether the command is built-in.

What it does:

- handles `help`
- dispatches `pwd`, `ls`, `cd`, `mkdir`, `touch`, `rm`, `cp`, `mv`, `cat`, and `echo`
- returns `-2` if the command is not built-in

Teaching point:

- This is a command router.
- It maps command names to C functions.

#### `cmd_pwd(int argc, char **argv)`

Prints the current working directory.

What it does:

- calls `getcwd()`
- prints the full path
- uses `perror("pwd")` if the path cannot be retrieved

Teaching point:

- This shows how a program can ask the operating system for process context.
- It demonstrates process working directory handling.

#### `cmd_ls(int argc, char **argv)`

Lists files in a directory.

What it does:

- accepts zero or one path argument
- opens the directory using `opendir()`
- iterates with `readdir()`
- skips `.` and `..`
- prints each directory entry name

Teaching point:

- This demonstrates directory traversal.
- It uses the file system API to inspect folder contents.

#### `cmd_cd(int argc, char **argv)`

Changes the current directory.

What it does:

- uses `HOME` when no directory is given
- otherwise uses the supplied path
- calls `chdir()` to move the process into the target directory

Teaching point:

- `cd` is a shell built-in because directory changes must happen in the shell process itself.
- If `cd` were run in a child process, the parent shell would not change directories.

#### `cmd_mkdir(int argc, char **argv)`

Creates one or more directories.

What it does:

- loops through each directory name
- calls `mkdir(path, 0777)`
- reports errors individually

Teaching point:

- This shows batch processing and file-system creation calls.

#### `cmd_touch(int argc, char **argv)`

Creates empty files if they do not exist.

What it does:

- loops through file names
- opens each file with `O_CREAT | O_WRONLY`
- closes the file descriptor immediately

Teaching point:

- This demonstrates file creation through file descriptors.
- `touch` is a simple example of open-and-close behavior.

#### `cmd_rm(int argc, char **argv)`

Removes files or empty directories.

What it does:

- tries `unlink()` first for files
- if that fails, tries `rmdir()` for directories
- reports errors if both fail

Teaching point:

- This shows the difference between file removal and directory removal.

#### `cmd_cp(int argc, char **argv)`

Copies a file.

What it does:

- validates that exactly two paths are given
- calls `copy_file(src, dst)`

Teaching point:

- The command function stays small and delegates actual work to a helper.
- That keeps code clean and readable.

#### `cmd_mv(int argc, char **argv)`

Moves or renames a file.

What it does:

- first tries `rename()`
- if the rename fails because of a cross-device move, it falls back to copy + delete
- removes the source after successful copy

Teaching point:

- This demonstrates robust fallback logic.
- `mv` is not just renaming in all cases; sometimes it must copy across file systems.

#### `cmd_cat(int argc, char **argv)`

Prints file contents to standard output.

What it does:

- opens each file read-only
- reads data in chunks
- writes the bytes to `STDOUT_FILENO`
- handles partial writes correctly

Teaching point:

- This is a strong example of low-level stream I/O.
- It teaches why read/write loops matter in systems programming.

#### `cmd_echo(int argc, char **argv)`

Prints its arguments separated by spaces.

What it does:

- loops over each argument after the command name
- prints them with spaces
- adds a newline at the end

Teaching point:

- This demonstrates straightforward argument processing and output formatting.

#### `copy_file(const char *src, const char *dst)`

Helper used by `cp` and `mv`.

What it does:

- opens the source file
- gets file metadata with `fstat()`
- creates the destination file with similar permissions
- reads and writes data in buffered chunks
- preserves permission bits from the source

Teaching point:

- This shows reusable helper design.
- It also teaches buffered file copying and permission handling.

#### `exec_external(char **argv)`

Runs commands that are not built into the shell.

What it does:

- creates a child process with `fork()`
- the child calls `execvp()`
- the parent waits using `waitpid()`
- returns the child’s exit status

Teaching point:

- This is one of the most important OS ideas in the project.
- `fork()` creates a new process.
- `execvp()` replaces the child process image with another program.
- `waitpid()` lets the parent wait for completion.

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
8. Shell parsing with `strtok()`
9. Modular C design using separate source files and shared headers

---

## How To Build And Run

Use the helper script:

```sh
./run.sh
```

If you want to build manually, the current script compiles:

```sh
gcc shell.c commands.c shellTalk.c -o shell
```

Then run:

```sh
./shell
```

---

## Example Session

```text
=====================================================
                 WELCOME TO OS161 SHELL
=====================================================

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
