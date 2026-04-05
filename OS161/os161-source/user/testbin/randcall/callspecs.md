# System Call Specifications for Random Call Test

This document defines the syscall specifications used in the randomized syscall testing.

## Syscall Specification Format

Each line contains:

- **First column:** Version/Availability number
- **Syscall name**
- **Arguments:** Argument types listed in order

## System Call Specifications

| Version | Syscall     | Arguments      |
| ------- | ----------- | -------------- |
| 2       | execv       | ptr, ptr       |
| 2       | waitpid     | int, ptr, int  |
| 2       | open        | ptr, int, int  |
| 2       | read        | int, ptr, size |
| 2       | write       | int, ptr, size |
| 2       | close       | int            |
| 5       | ioctl       | int, int, ptr  |
| 2       | lseek       | int, off, int  |
| 4       | fsync       | int            |
| 4       | ftruncate   | int, off       |
| 4       | fstat       | int, ptr       |
| 4       | remove      | ptr            |
| 4       | rename      | ptr, ptr       |
| 5       | link        | ptr, ptr       |
| 4       | mkdir       | ptr, int       |
| 4       | rmdir       | ptr            |
| 2       | chdir       | ptr            |
| 4       | getdirentry | int, ptr, size |
| 5       | symlink     | ptr, ptr       |
| 5       | readlink    | ptr, ptr, size |
| 2       | dup2        | int, int       |
| 5       | pipe        | ptr            |
| 5       | \_\_time    | ptr, ptr       |
| 2       | \_\_getcwd  | ptr, size      |
| 5       | stat        | ptr, ptr       |
| 5       | lstat       | ptr, ptr       |

## Argument Types

- **int** - Integer value
- **ptr** - Pointer to data
- **size** - Size value (typically size_t)
- **off** - Offset (typically off_t)

## Notes

The version number indicates when the syscall was introduced or its compatibility version. Version 2 represents core syscalls, while versions 4 and 5 represent optional or extended functionality.
