#include "tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAX_INPUT_LENGTH 1024

/**
 * main - Entry point of the program
 *
 * This function serves as the entry point of the program. It calls the
 * run_shell function to start the execution of the shell program and returns 0
 * upon successful completion.
 *
 * Return: Always returns 0 to indicate successful completion.
 */

void run_shell(void);

int main(void)
{
run_shell();
return (0);
}

/**
 * run_shell - Run the shell.
 *
 * This function serves as the main loop of the shell. It continuously prompts
 * the user for input, reads the input, and processes the input command.
 */

void run_shell(void){
char input[MAX_INPUT_LENGTH];
char *newline;

while (1)
{
printf("$ ");
fgets(input, sizeof(input), stdin);

 newline = strchr(input, '\n');
if (newline != NULL){
 *newline = '\0';
}
printf("Command entered: %s\n", input);

if (strcmp(input, "exit") == 0){
printf("Exiting shell...\n");
break;
}else if (strcmp(input, "cd") == 0){
cd_builtin();
}else if (strcmp(input, "help") == 0){
help_builtin();
}else if (strcmp(input, "alias") == 0){
alias_builtin();
}else if (strcmp(input, "history") == 0){
history_builtin();
}else{
}
}
}
