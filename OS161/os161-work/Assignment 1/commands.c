#include "package.h"

#define MAX_LINE 1024
#define MAX_ARGS 64
#define MAX_TOKENS 128

struct parsed_cmd
{
    char *argv[MAX_ARGS];
    int argc;
    const char *in_path;
    const char *out_path;
    int out_append;
    int background;
};

static int tokenize(const char *line, char *storage, size_t storage_len, char **tokens, int max_tokens);
static int parse_tokens(int ntok, char **tokens, struct parsed_cmd *cmd);
static void print_prompt(int last_status);
static void reap_background_children(void);
static int dispatch_command(struct parsed_cmd *cmd);
static int run_child_and_wait(struct parsed_cmd *cmd, int (*fn)(int, char **));
static int exec_external(struct parsed_cmd *cmd);
static int apply_redirections(struct parsed_cmd *cmd);

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

void shell(void)
{
    char command[MAX_LINE];
    int last_status = 0;

    while (1)
    {
        struct parsed_cmd cmd;
        char *tokens[MAX_TOKENS];
        char token_storage[MAX_LINE];
        int ntok;

        reap_background_children();

        print_prompt(last_status);

        if (fgets(command, sizeof(command), stdin) == NULL)
        {
            if (feof(stdin))
            {
                printf("\n");
                goodbye();
                break;
            }
            continue;
        }

        command[strcspn(command, "\n")] = 0;

        if (strlen(command) == 0)
            continue;

        ntok = tokenize(command, token_storage, sizeof(token_storage), tokens, MAX_TOKENS);
        if (ntok <= 0)
            continue;

        if (parse_tokens(ntok, tokens, &cmd) != 0)
        {
            last_status = 2;
            continue;
        }

        if (cmd.argc == 0)
            continue;

        if (strcmp(cmd.argv[0], "exit") == 0)
        {
            if (cmd.background || cmd.in_path || cmd.out_path)
                fprintf(stderr, "exit: redirection/background not supported\n");
            goodbye();
            break;
        }

        last_status = dispatch_command(&cmd);
    }
}

static void print_prompt(int last_status)
{
    if (last_status == 0)
        printf("\033[1;32m❯\033[0m ");
    else
        printf("\033[1;31m❯\033[0m ");
    fflush(stdout);
}

static int is_special_char(char c)
{
    return (c == '<' || c == '>' || c == '&' || c == '|');
}

static int tokenize(const char *line, char *storage, size_t storage_len, char **tokens, int max_tokens)
{
    const char *p = line;
    char *w = storage;
    char *wend = storage + storage_len;
    int ntok = 0;

    while (*p != '\0')
    {
        while (*p != '\0' && isspace((unsigned char)*p))
            p++;
        if (*p == '\0')
            break;

        if (ntok >= max_tokens - 1)
        {
            fprintf(stderr, "shell: too many tokens\n");
            break;
        }

        if (w >= wend)
        {
            fprintf(stderr, "shell: token buffer overflow\n");
            break;
        }

        tokens[ntok++] = w;

        if (is_special_char(*p))
        {
            if (*p == '>' && p[1] == '>')
            {
                if (wend - w < 3)
                {
                    fprintf(stderr, "shell: token buffer overflow\n");
                    break;
                }
                *w++ = '>';
                *w++ = '>';
                p += 2;
            }
            else
            {
                if (wend - w < 2)
                {
                    fprintf(stderr, "shell: token buffer overflow\n");
                    break;
                }
                *w++ = *p++;
            }
            *w++ = '\0';
            continue;
        }

        while (*p != '\0' && !isspace((unsigned char)*p) && !is_special_char(*p))
        {
            if (w >= wend - 1)
            {
                fprintf(stderr, "shell: token buffer overflow\n");
                tokens[ntok] = NULL;
                return ntok;
            }
            *w++ = *p++;
        }
        *w++ = '\0';
    }

    tokens[ntok] = NULL;
    return ntok;
}

static int parse_tokens(int ntok, char **tokens, struct parsed_cmd *cmd)
{
    int i;

    cmd->argc = 0;
    cmd->in_path = NULL;
    cmd->out_path = NULL;
    cmd->out_append = 0;
    cmd->background = 0;

    for (i = 0; i < ntok; i++)
    {
        const char *t = tokens[i];

        if (strcmp(t, "|") == 0)
        {
            fprintf(stderr, "shell: pipes (|) not implemented\n");
            return 1;
        }

        if (strcmp(t, "&") == 0)
        {
            if (i != ntok - 1)
            {
                fprintf(stderr, "shell: '&' must be the last token\n");
                return 1;
            }
            cmd->background = 1;
            continue;
        }

        if (strcmp(t, "<") == 0)
        {
            if (cmd->in_path != NULL)
            {
                fprintf(stderr, "shell: multiple input redirections\n");
                return 1;
            }
            if (i + 1 >= ntok)
            {
                fprintf(stderr, "shell: missing filename after '<'\n");
                return 1;
            }
            cmd->in_path = tokens[++i];
            continue;
        }

        if (strcmp(t, ">") == 0 || strcmp(t, ">>") == 0)
        {
            if (cmd->out_path != NULL)
            {
                fprintf(stderr, "shell: multiple output redirections\n");
                return 1;
            }
            if (i + 1 >= ntok)
            {
                fprintf(stderr, "shell: missing filename after '%s'\n", t);
                return 1;
            }
            cmd->out_append = (t[1] == '>');
            cmd->out_path = tokens[++i];
            continue;
        }

        if (cmd->argc >= MAX_ARGS - 1)
        {
            fprintf(stderr, "shell: too many arguments\n");
            return 1;
        }

        cmd->argv[cmd->argc++] = tokens[i];
    }

    cmd->argv[cmd->argc] = NULL;
    return 0;
}

static void reap_background_children(void)
{
    int status;
    while (waitpid(-1, &status, WNOHANG) > 0)
        ;
}

static int dispatch_command(struct parsed_cmd *cmd)
{
    int (*fn)(int, char **) = NULL;

    if (strcmp(cmd->argv[0], "help") == 0)
    {
        if (cmd->background || cmd->in_path || cmd->out_path)
            return run_child_and_wait(cmd, NULL);
        help();
        return 0;
    }

    if (strcmp(cmd->argv[0], "cd") == 0)
    {
        if (cmd->background)
        {
            fprintf(stderr, "cd: cannot run in background\n");
            return 1;
        }
        if (cmd->in_path || cmd->out_path)
        {
            fprintf(stderr, "cd: redirection not supported\n");
            return 1;
        }
        return cmd_cd(cmd->argc, cmd->argv);
    }

    if (strcmp(cmd->argv[0], "echo") == 0)
        fn = cmd_echo;
    else if (strcmp(cmd->argv[0], "pwd") == 0)
        fn = cmd_pwd;
    else if (strcmp(cmd->argv[0], "ls") == 0)
        fn = cmd_ls;
    else if (strcmp(cmd->argv[0], "mkdir") == 0)
        fn = cmd_mkdir;
    else if (strcmp(cmd->argv[0], "touch") == 0)
        fn = cmd_touch;
    else if (strcmp(cmd->argv[0], "rm") == 0)
        fn = cmd_rm;
    else if (strcmp(cmd->argv[0], "cp") == 0)
        fn = cmd_cp;
    else if (strcmp(cmd->argv[0], "mv") == 0)
        fn = cmd_mv;
    else if (strcmp(cmd->argv[0], "cat") == 0)
        fn = cmd_cat;

    if (fn != NULL)
    {
        if (!cmd->background && !cmd->in_path && !cmd->out_path)
            return fn(cmd->argc, cmd->argv);
        return run_child_and_wait(cmd, fn);
    }

    return exec_external(cmd);
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
    int show_all = 0;
    int long_format = 0;
    DIR *dir;
    struct dirent *entry;
    int i;

    for (i = 1; i < argc; i++)
    {
        if (argv[i][0] != '-')
            break;
        if (strcmp(argv[i], "-a") == 0)
            show_all = 1;
        else if (strcmp(argv[i], "-l") == 0)
            long_format = 1;
        else if (strcmp(argv[i], "-al") == 0 || strcmp(argv[i], "-la") == 0)
        {
            show_all = 1;
            long_format = 1;
        }
        else
        {
            fprintf(stderr, "ls: unsupported option '%s'\n", argv[i]);
            return 1;
        }
    }

    if (i < argc)
        path = argv[i++];
    if (i < argc)
    {
        fprintf(stderr, "ls: usage: ls [-a] [-l] [dir]\n");
        return 1;
    }

    dir = opendir(path);
    if (dir == NULL)
    {
        perror("ls");
        return 1;
    }

    while ((entry = readdir(dir)) != NULL)
    {
        struct stat st;
        char fullpath[1024];
        int is_dot = (entry->d_name[0] == '.');

        if (!show_all)
        {
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                continue;
            if (is_dot)
                continue;
        }

        if (!long_format)
        {
            printf("%s\n", entry->d_name);
            continue;
        }

        if (snprintf(fullpath, sizeof(fullpath), "%s/%s", path, entry->d_name) >= (int)sizeof(fullpath))
        {
            fprintf(stderr, "ls: path too long\n");
            closedir(dir);
            return 1;
        }

        if (stat(fullpath, &st) != 0)
        {
            perror("ls");
            closedir(dir);
            return 1;
        }

        {
            char type = '-';
            if (S_ISDIR(st.st_mode))
                type = 'd';
            else if (S_ISLNK(st.st_mode))
                type = 'l';

            printf("%c %9lld %s\n", type, (long long)st.st_size, entry->d_name);
        }
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
        target = "/";

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

    if (argc == 1)
    {
        char buf[4096];
        ssize_t nread;

        while ((nread = read(STDIN_FILENO, buf, sizeof(buf))) > 0)
        {
            ssize_t off = 0;
            while (off < nread)
            {
                ssize_t nw = write(STDOUT_FILENO, buf + off, (size_t)(nread - off));
                if (nw < 0)
                {
                    perror("cat");
                    return 1;
                }
                off += nw;
            }
        }

        if (nread < 0)
        {
            perror("cat");
            return 1;
        }

        return 0;
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

static int apply_redirections(struct parsed_cmd *cmd)
{
    if (cmd->in_path != NULL)
    {
        int fd = open(cmd->in_path, O_RDONLY);
        if (fd < 0)
        {
            perror(cmd->in_path);
            return 1;
        }
        if (dup2(fd, STDIN_FILENO) < 0)
        {
            perror("dup2");
            close(fd);
            return 1;
        }
        close(fd);
    }

    if (cmd->out_path != NULL)
    {
        int flags = O_CREAT | O_WRONLY;
        int fd;

        if (cmd->out_append)
            flags |= O_APPEND;
        else
            flags |= O_TRUNC;

        fd = open(cmd->out_path, flags, 0666);
        if (fd < 0)
        {
            perror(cmd->out_path);
            return 1;
        }
        if (dup2(fd, STDOUT_FILENO) < 0)
        {
            perror("dup2");
            close(fd);
            return 1;
        }
        close(fd);
    }

    return 0;
}

static int run_child_and_wait(struct parsed_cmd *cmd, int (*fn)(int, char **))
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
        if (apply_redirections(cmd) != 0)
            _exit(1);

        if (fn == NULL)
        {
            help();
            fflush(NULL);
            _exit(0);
        }

        status = fn(cmd->argc, cmd->argv);
        fflush(NULL);
        _exit(status);
    }

    if (cmd->background)
    {
        printf("[bg] %d\n", (int)pid);
        return 0;
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

static int exec_external(struct parsed_cmd *cmd)
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
        if (apply_redirections(cmd) != 0)
            _exit(1);
        execvp(cmd->argv[0], cmd->argv);
        perror(cmd->argv[0]);
        _exit(127);
    }

    if (cmd->background)
    {
        printf("[bg] %d\n", (int)pid);
        return 0;
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
