#include "main.h"

/**
 * executeExternalCommand - Executes an external command
 * @tokens: Array of tokens/arguments for the command to execute
 *
 * Return: status of the execution, or -1 on failure
 */
int executeExternalCommand(char **tokens)
{
    pid_t pid;
    int status;

    pid = fork();
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

/**
 * handleBuiltInCommand - Handle built-in shell commands
 * @tokens: Array of tokens/arguments for the command
 *
 * Return: 0 if command is a built-in and executed, -1 otherwise
 
int handleBuiltInCommand(char **tokens)
{
    if (tokens == NULL || tokens[0] == NULL)
        return (-1);

    if (strcmp(tokens[0], "exit") == 0)
    {
        printf("Goodbye!\n");
        exit(0);
    }

    /* Add more built-in commands here, e.g., "cd" and "help" 

    return (-1);
    
}
*/
