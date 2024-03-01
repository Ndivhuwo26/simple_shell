#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARGS 100

/**
 * parse_command - Parse a command string into individual words.
 *
 * This function takes a command string as input and splits it into individual
 * words (tokens). The words are stored in an array of strings, where each
 * element represents one word. The function modifies the original command
 * string by replacing whitespace characters with null terminators to separate
 * the words.
 *
 * @command: The command string to be parsed.
 * @args: An array to store the parsed words.
 *
 * Return: Returns the number of words (tokens) found in the command string.
 */
int parse_command(char *command, char *args[])

{

char *token;
int count = 0;

token = strtok(command, " \t\n");

while (token != NULL && count < MAX_ARGS - 1)
{
args[count] = token;
count++;

token = strtok(NULL, " \t\n");
}
args[count] = NULL;

return (count);
}
