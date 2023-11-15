#include "main.h"

/**
 * main_loop - the function which runs the shell forever until it is exited.
 * @input: A variable of file type.
 * Return: no return value
 */

void main_loop(FILE *input)
{
	char *line;
	char **command_args;
	int i;

	while (1)
	{
		line = printing_prompt(input);
		command_args = parsing_command(line);
		executing_command(command_args);
		free(line);
		for (i = 0; command_args[i] != NULL; i++)
		{
			free(command_args[i]);
		}
		free(command_args);
	}
}
