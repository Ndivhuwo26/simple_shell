#include <stdio.h>
#include <string.h>

/**
 * find_pipe - Find the position of the pipe character in a command string.
 *
 * This function takes a command string as input and searches for the pipe
 * character '|' within the string. If the pipe character is found, it returns
 * the index position of the first occurrence of the pipe character. If no
 * pipe character is found, it returns -1.
 *
 * @command: The command string to search for the pipe character.
 *
 * Return: Returns the index position of the pipe character if found,
 *         otherwise returns -1.
 */

int find_pipe(const char *command){
const char *pipe_pos = strchr(command, '|');

if (pipe_pos != NULL){
return (int)(pipe_pos - command);
}
else
{
return (-1);
}

}
