#include "package.h"

#define MAX_ARGS 64

static int parse_command(char *line, char **argv, int max_args);
static int run_builtin_or_manual(int argc, char **argv);

static int cmd_pwd(int argc, char **argv);
static int cmd_ls(int argc, char **argv);
static int cmd_cd(int argc, char **argv);
static int cmd_mkdir(int argc, char **argv);
static int cmd_touch(int argc, char **argv);
static int cmd_rm(int argc, char **argv);
static int cmd_cp(int argc, char **argv);
static int cmd_mv(int argc, char **argv);
static int cmd_cat(int argc, char **argv);
static int cmd_echo(int argc, char **argv);

static int copy_file(const char *src, const char *dst);
static int exec_external(char **argv);

void shell(void)
{
    char command[100];
    int last_status = 0;

    while (1)
    {
        char cwd[1024];
        getcwd(cwd, sizeof(cwd));

        if (last_status == 0)
            printf("\033[1;32m❯\033[0m ");
        else
            printf("\033[1;31m❯\033[0m ");

        fflush(stdout);

        if (fgets(command, sizeof(command), stdin) == NULL)
            continue;

        command[strcspn(command, "\n")] = 0;

        if (strlen(command) == 0)
            continue;

        {
            char *argv[MAX_ARGS];
            int argc = parse_command(command, argv, MAX_ARGS);

            if (argc == 0)
                continue;

            if (strcmp(argv[0], "exit") == 0)
            {
                goodbye();
                break;
            }

            last_status = run_builtin_or_manual(argc, argv);
            if (last_status == -2)
                last_status = exec_external(argv);
        }
    }
}

static int parse_command(char *line, char **argv, int max_args)
{
    int argc = 0;
    char *token = strtok(line, " \t");

    while (token != NULL && argc < max_args - 1)
    {
        argv[argc++] = token;
        token = strtok(NULL, " \t");
    }

    argv[argc] = NULL;
    return argc;
}

static int run_builtin_or_manual(int argc, char **argv)
{
    if (strcmp(argv[0], "help") == 0)
    {
        help();
        return 0;
    }

    if (strcmp(argv[0], "pwd") == 0)
        return cmd_pwd(argc, argv);
    if (strcmp(argv[0], "ls") == 0)
        return cmd_ls(argc, argv);
    if (strcmp(argv[0], "cd") == 0)
        return cmd_cd(argc, argv);
    if (strcmp(argv[0], "mkdir") == 0)
        return cmd_mkdir(argc, argv);
    if (strcmp(argv[0], "touch") == 0)
        return cmd_touch(argc, argv);
    if (strcmp(argv[0], "rm") == 0)
        return cmd_rm(argc, argv);
    if (strcmp(argv[0], "cp") == 0)
        return cmd_cp(argc, argv);
    if (strcmp(argv[0], "mv") == 0)
        return cmd_mv(argc, argv);
    if (strcmp(argv[0], "cat") == 0)
        return cmd_cat(argc, argv);
    if (strcmp(argv[0], "echo") == 0)
        return cmd_echo(argc, argv);

    return -2;
}

static int cmd_pwd(int argc, char **argv)
{
    char cwd[4096];
    (void)argc;
    (void)argv;

    if (getcwd(cwd, sizeof(cwd)) == NULL)
    {
        perror("pwd");
        return 1;
    }

    printf("%s\n", cwd);
    return 0;
}

static int cmd_ls(int argc, char **argv)
{
    const char *path = ".";
    DIR *dir;
    struct dirent *entry;

    if (argc > 2)
    {
        fprintf(stderr, "ls: usage: ls [dir]\n");
        return 1;
    }

    if (argc == 2)
        path = argv[1];

    dir = opendir(path);
    if (dir == NULL)
    {
        perror("ls");
        return 1;
    }

    while ((entry = readdir(dir)) != NULL)
    {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
    return 0;
}

static int cmd_cd(int argc, char **argv)
{
    const char *target = NULL;

    if (argc > 2)
    {
        fprintf(stderr, "cd: usage: cd [dir]\n");
        return 1;
    }

    if (argc == 1)
        target = getenv("HOME");
    else
        target = argv[1];

    if (target == NULL)
    {
        fprintf(stderr, "cd: HOME not set\n");
        return 1;
    }

    if (chdir(target) != 0)
    {
        perror("cd");
        return 1;
    }

    return 0;
}

static int cmd_mkdir(int argc, char **argv)
{
    int i;
    int status = 0;

    if (argc < 2)
    {
        fprintf(stderr, "mkdir: usage: mkdir <dir> [dir...]\n");
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        if (mkdir(argv[i], 0777) != 0)
        {
            perror("mkdir");
            status = 1;
        }
    }

    return status;
}

static int cmd_touch(int argc, char **argv)
{
    int i;
    int status = 0;

    if (argc < 2)
    {
        fprintf(stderr, "touch: usage: touch <file> [file...]\n");
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        int fd = open(argv[i], O_CREAT | O_WRONLY, 0666);
        if (fd < 0)
        {
            perror("touch");
            status = 1;
            continue;
        }
        close(fd);
    }

    return status;
}

static int cmd_rm(int argc, char **argv)
{
    int i;
    int status = 0;

    if (argc < 2)
    {
        fprintf(stderr, "rm: usage: rm <path> [path...]\n");
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        if (unlink(argv[i]) != 0)
        {
            if (rmdir(argv[i]) != 0)
            {
                perror("rm");
                status = 1;
            }
        }
    }

    return status;
}

static int cmd_cp(int argc, char **argv)
{
    if (argc != 3)
    {
        fprintf(stderr, "cp: usage: cp <src> <dst>\n");
        return 1;
    }

    return copy_file(argv[1], argv[2]);
}

static int cmd_mv(int argc, char **argv)
{
    if (argc != 3)
    {
        fprintf(stderr, "mv: usage: mv <src> <dst>\n");
        return 1;
    }

    if (rename(argv[1], argv[2]) == 0)
        return 0;

    if (errno != EXDEV)
    {
        perror("mv");
        return 1;
    }

    if (copy_file(argv[1], argv[2]) != 0)
        return 1;

    if (unlink(argv[1]) != 0)
    {
        perror("mv");
        return 1;
    }

    return 0;
}

static int cmd_cat(int argc, char **argv)
{
    int i;
    int status = 0;

    if (argc < 2)
    {
        fprintf(stderr, "cat: usage: cat <file> [file...]\n");
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        int fd = open(argv[i], O_RDONLY);
        char buf[4096];
        ssize_t nread;

        if (fd < 0)
        {
            perror("cat");
            status = 1;
            continue;
        }

        while ((nread = read(fd, buf, sizeof(buf))) > 0)
        {
            ssize_t off = 0;
            while (off < nread)
            {
                ssize_t nw = write(STDOUT_FILENO, buf + off, (size_t)(nread - off));
                if (nw < 0)
                {
                    perror("cat");
                    close(fd);
                    return 1;
                }
                off += nw;
            }
        }

        if (nread < 0)
        {
            perror("cat");
            status = 1;
        }

        close(fd);
    }

    return status;
}

static int cmd_echo(int argc, char **argv)
{
    int i;

    for (i = 1; i < argc; i++)
    {
        if (i > 1)
            printf(" ");
        printf("%s", argv[i]);
    }
    printf("\n");
    return 0;
}

static int copy_file(const char *src, const char *dst)
{
    int in_fd;
    int out_fd;
    struct stat st;
    char buf[8192];
    int status = 0;

    in_fd = open(src, O_RDONLY);
    if (in_fd < 0)
    {
        perror("cp");
        return 1;
    }

    if (fstat(in_fd, &st) != 0)
    {
        perror("cp");
        close(in_fd);
        return 1;
    }

    out_fd = open(dst, O_CREAT | O_WRONLY | O_TRUNC, (mode_t)(st.st_mode & 0777));
    if (out_fd < 0)
    {
        perror("cp");
        close(in_fd);
        return 1;
    }

    for (;;)
    {
        ssize_t nread = read(in_fd, buf, sizeof(buf));
        if (nread == 0)
            break;
        if (nread < 0)
        {
            perror("cp");
            status = 1;
            break;
        }

        {
            ssize_t off = 0;
            while (off < nread)
            {
                ssize_t nw = write(out_fd, buf + off, (size_t)(nread - off));
                if (nw < 0)
                {
                    perror("cp");
                    status = 1;
                    break;
                }
                off += nw;
            }
        }

        if (status != 0)
            break;
    }

    close(in_fd);
    close(out_fd);
    return status;
}

static int exec_external(char **argv)
{
    pid_t pid = fork();
    int status;

    if (pid < 0)
    {
        perror("fork");
        return 1;
    }

    if (pid == 0)
    {
        execvp(argv[0], argv);
        perror(argv[0]);
        _exit(127);
    }

    if (waitpid(pid, &status, 0) < 0)
    {
        perror("waitpid");
        return 1;
    }

    if (WIFEXITED(status))
        return WEXITSTATUS(status);
    if (WIFSIGNALED(status))
        return 128 + WTERMSIG(status);

    return 1;
}
