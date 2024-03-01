#include <stdio.h>
#include <unistd.h>

/**
 * print_current_directory - Print the current working directory.
 *
 * This function retrieves the current working directory of the process
 * and prints it to the standard output.
 *
 * Return: Returns 0 on success, -1 on failure.
 */
int print_current_directory(void)

{
char cwd[4096];

if (getcwd(cwd, sizeof(cwd)) != NULL)
{
printf("Current Directory: %s\n", cwd);
return (0);
}
else
{
perror("getcwd");
return (-1);
}
}
