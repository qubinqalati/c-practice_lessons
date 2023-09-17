#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_ARGS 10

int main() {
    char command[100];
    char *args[MAX_ARGS];
    int num_args;
    while (1) {
        printf("minishell> ");
        fgets(command, 100, stdin);
        // Parse the command into arguments.
        num_args = 0;
        args[num_args++] = strtok(command, " ");
        while ((args[num_args++] = strtok(NULL, " ")) != NULL) {
            if (num_args >= MAX_ARGS) {
                fprintf(stderr, "Too many arguments.\n");
                break;
            }
        }
        // Execute the command.
        if (strcmp(args[0], "exit") == 0) {
            break;
        } else if (strcmp(args[0], "cd") == 0) {
            if (num_args != 2) {
                fprintf(stderr, "Usage: cd <directory>\n");
            } else {
                chdir(args[1]);
            }
        } else {
            pid_t pid = fork();
            if (pid == 0) {
                // Child process.
                execvp(args[0], args);
                fprintf(stderr, "Command not found: %s\n", args[0]);
                exit(1);
            } else {
                // Parent process.
                waitpid(pid, NULL, 0);
            }
        }
    }
    return 0;
}
