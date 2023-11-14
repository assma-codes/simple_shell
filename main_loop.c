#include "main.h"

/**
 * main_loop - the function which runs the shell forever until it is exited.
 * Return: no return value
 */

void main_loop(void)
{
	char *line;
	char **command_args;

	while (1)
	{
		line = printing_prompt();
		command_args = parsing_command(line);
		executing_command(command_args);
		free(line);
		free(command_args);
	}
}
