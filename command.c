#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * execute_system_command - Execute a system command.
 *
 * This function takes a command and its arguments as input and executes it
 * using the system's command execution mechanism. It forks a child process
 * to execute the command and waits for the child process to complete.
 *
 * @command: The command to be executed.
 * @args: Arguments for the command.
 *
 * Return: Returns 1 if the command is executed successfully,
 *         otherwise returns 0 indicating failure.
 */
int execute_system_command(char *command, char **args)

{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
if (execvp(command, args) == -1)
{
perror("execvp");
exit(EXIT_FAILURE);
}
}
else if (pid < 0)
{
perror("fork");
return (0);
}
else
{
do {

if (waitpid(pid, &status, WUNTRACED) == -1)
{
perror("waitpid");
return (0);
}
}
while (!WIFEXITED(status) && !WIFSIGNALED(status))
;
}
return (1);
}
