#include "main.h"

/**
 * main_loop - the function which runs the shell forever until it is exited.
 * Return: no return value
 */

void  main_loop()
{
	while (1)
	{
		char *line = printing_prompt();
		char **command_args = parsing_command(line);
		executing_command(command_args);
	}
}
