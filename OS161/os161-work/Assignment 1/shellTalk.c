#include "package.h"
#include "function.h"

static void type_text(const char *text)
{
    int i;

    for (i = 0; text[i] != '\0'; i++)
    {
        printf("%c", text[i]);
        fflush(stdout);
        usleep(50000);
    }
}

void greatings(void)
{
    printf("\n\033[2J\033[H"); /* Clear screen */
    printf("\n");
    printf("    \033[1;38;5;51m███████╗██╗  ██╗███████╗██╗     ██╗\033[0m\n");
    printf("    \033[1;38;5;51m██╔════╝██║  ██║██╔════╝██║     ██║\033[0m\n");
    printf("    \033[1;38;5;51m███████╗███████║█████╗  ██║     ██║\033[0m\n");
    printf("    \033[1;38;5;51m╚════██║██╔══██║██╔══╝  ██║     ██║\033[0m\n");
    printf("    \033[1;38;5;51m███████║██║  ██║███████╗███████╗███████╗\033[0m\n");
    printf("    \033[1;38;5;51m╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝\033[0m\n");
    printf("\n");
    printf("    \033[1;38;5;82m╭────────────────────────────────────────────────────────────────╮\033[0m\n");
    printf("      \033[1;38;5;226mWelcome to\033[0m \033[1;38;5;51mMy Command Shell\033[0m - \033[1;38;5;45mLab Assignment 1\033[0m\n");
    printf("    \033[1;38;5;82m├────────────────────────────────────────────────────────────────┤\033[0m\n");
    printf("      \033[1;38;5;45m▸\033[0m  Type \033[1;38;5;226mhelp\033[0m to show all available commands\n");
    printf("      \033[1;38;5;45m▸\033[0m  Type \033[1;38;5;226mexit\033[0m to quit the shell\n");
    printf("      \033[1;38;5;45m▸\033[0m  Supports redirection: <, >, >> and background: &\n");
    printf("    \033[1;38;5;82m╰────────────────────────────────────────────────────────────────╯\033[0m\n");
    printf("\n");
}

void goodbye(void)
{
    const char *quotes[] = {
        "When in doubt, read the error—it's trying to help.",
        "Debugging is detective work; the bug always leaves clues.",
        "Don’t optimize guesses—profile first.",
        "Make it work, make it right, make it fast—then rest.",
        "Measure twice, `rm -rf` never.",
        "Version control is time travel. Use it responsibly.",
        "When stuck, explain the problem to a rubber duck.",
        "Coffee in, bugs out. Mostly.",
        "Silence is golden—unless it’s your program hanging.",
        "Sometimes the bug is just a missing semicolon with attitude."};

    int n = sizeof(quotes) / sizeof(quotes[0]);
    const char *msg = quotes[rand() % n];

    printf("\n");
    printf("    \033[1;38;5;226m╭──────────────────────────────────────────────────────────────╮\033[0m\n");
    printf("      \033[1;38;5;196m⚡ Shell Shutdown in Progress ⚡\033[0m\n");
    printf("    \033[1;38;5;226m├──────────────────────────────────────────────────────────────┤\033[0m\n");
    printf("      \033[1;38;5;45m");
    type_text(msg);
    printf("\033[0m\n");
    printf("    \033[1;38;5;226m├──────────────────────────────────────────────────────────────┤\033[0m\n");
    printf("      \033[1;38;5;82m✓ All processes terminated safely\033[0m\n");
    printf("      \033[1;38;5;82m✓ File system unmounted\033[0m\n");
    printf("    \033[1;38;5;226m╰──────────────────────────────────────────────────────────────╯\033[0m\n");
    printf("\n");
    printf("    \033[1;38;5;51mGoodbye! See you next time. 👋\033[0m\n\n");
}

void help(void)
{
    printf("\n");
    printf("    \033[1;38;5;51m╭────────────────────────────────────────────────────────────────╮\033[0m\n");
    printf("      \033[1;38;5;226m📚 SHELL COMMAND REFERENCE 📚\033[0m\n");
    printf("    \033[1;38;5;51m├────────────────────────────────────────────────────────────────┤\033[0m\n");
    printf("\n");
    printf("    \033[1;38;5;226m🔷 SHELL CONTROL COMMANDS:\033[0m\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226mhelp\033[0m   \033[1;38;5;45m→\033[0m  Display this help message\n");
    printf("    \033[1;38;5;82m└─\033[0m  \033[1;38;5;226mexit\033[0m   \033[1;38;5;45m→\033[0m  Exit the shell\n");
    printf("\n");
    printf("    \033[1;38;5;226m🔷 DIRECTORY & FILE NAVIGATION:\033[0m\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226mpwd\033[0m    \033[1;38;5;45m→\033[0m  Print current working directory\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226mls\033[0m     \033[1;38;5;45m→\033[0m  List directory contents\n");
    printf("    \033[1;38;5;82m└─\033[0m  \033[1;38;5;226mcd\033[0m     \033[1;38;5;45m→\033[0m  Change directory\n");
    printf("\n");
    printf("    \033[1;38;5;226m🔷 FILE & DIRECTORY CREATION:\033[0m\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226mmkdir\033[0m  \033[1;38;5;45m→\033[0m  Create directory\n");
    printf("    \033[1;38;5;82m└─\033[0m  \033[1;38;5;226mtouch\033[0m  \033[1;38;5;45m→\033[0m  Create empty file\n");
    printf("\n");
    printf("    \033[1;38;5;226m🔷 FILE MANAGEMENT:\033[0m\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226mrm\033[0m     \033[1;38;5;45m→\033[0m  Remove file or empty directory\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226mcp\033[0m     \033[1;38;5;45m→\033[0m  Copy file\n");
    printf("    \033[1;38;5;82m└─\033[0m  \033[1;38;5;226mmv\033[0m     \033[1;38;5;45m→\033[0m  Move/Rename file\n");
    printf("\n");
    printf("    \033[1;38;5;226m🔷 FILE VIEWING & OUTPUT:\033[0m\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226mcat\033[0m    \033[1;38;5;45m→\033[0m  Display file contents\n");
    printf("    \033[1;38;5;82m└─\033[0m  \033[1;38;5;226mecho\033[0m   \033[1;38;5;45m→\033[0m  Print text to terminal\n");
    printf("\n");
    printf("    \033[1;38;5;226m🔷 EXTERNAL PROGRAMS:\033[0m\n");
    printf("    \033[1;38;5;82m└─\033[0m  \033[1;38;5;196mAny unlisted command\033[0m \033[1;38;5;45m→\033[0m  Executed via fork() + execvp()\n");
    printf("\n");
    printf("    \033[1;38;5;226m🔷 BONUS FEATURES:\033[0m\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226m>\033[0m / \033[1;38;5;226m>>\033[0m \033[1;38;5;45m→\033[0m  Redirect/append stdout to a file\n");
    printf("    \033[1;38;5;82m├─\033[0m  \033[1;38;5;226m<\033[0m       \033[1;38;5;45m→\033[0m  Redirect stdin from a file\n");
    printf("    \033[1;38;5;82m└─\033[0m  \033[1;38;5;226m&\033[0m       \033[1;38;5;45m→\033[0m  Run command in background\n");
    printf("\n");
    printf("    \033[1;38;5;51m╰────────────────────────────────────────────────────────────────╯\033[0m\n");
    printf("\n");
}
