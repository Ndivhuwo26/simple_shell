#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT_LENGTH 1024

/**
 * take_input - Take input from the user.
 *
 * This function prompts the user to enter a command and reads the input
 * from the standard input stream (stdin). The input is stored in a buffer
 * and returned as a string.
 *
 * Return: Returns a pointer to the input string.
 */
char *take_input(void){
static char input[MAX_INPUT_LENGTH];

char *newline;

printf("$ ");
fgets(input, sizeof(input), stdin);

newline = strchr(input, '\n');
if (newline != NULL){
     *newline = '\0';
}else{
int c;
while ((c = getchar()) != '\n' && c != EOF);
}
return (input);
}
int main(void) {
char *input = take_input();
printf("Input: %s\n", input);
return (0);
}
