#include <stdio.h>

/**
 * help_builtin - Display information about built-in commands.
 *
 * This function provides help and usage information on built-in commands
 * available in the shell. It lists out the available built-in commands along
 * with a brief description of each command's functionality.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

void help_builtin();

int main(){

help_builtin();
return (0);
}


void help_builtin(){
printf("List of built-in commands:\n");
printf("1. help: Display information about built-in commands.\n");
printf("2. cd: Change the current directory.\n");
printf("3. exit: Exit the shell.\n");
printf("4. alias: Create or display aliases.\n");
printf("5. history: Display the command history.\n");
printf("6. ... (add more built-in commands here)\n");
}
