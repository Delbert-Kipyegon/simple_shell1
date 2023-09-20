#include "main.h"

int executeExternalCommand(char **tokens)
{
    pid_t pid = fork();
    int status;

    if (pid == 0)
    {

        execvp(tokens[0], tokens);
        perror("execvp");
        exit(1);
    }
    else if (pid < 0)
    {
        perror("fork");
        return (-1);
    }
    else
    {

        waitpid(pid, &status, 0);
        return status;
    }
}

/* Function to handle built-in commands     */
int handleBuiltInCommand(char **tokens)
{
    if (tokens[0] == NULL)
        return (-1);
    if (tokens[0]) {
    printf("Token[0]: %s\n", tokens[0]);
    }
    
    if (strcmp(tokens[0], "exit") == 0)
    {
        printf("Goodbye!\n");
        exit(0);
    }
    /* Add more built-in commands here, e.g., "cd" and "help" */

    return (-1);
}
