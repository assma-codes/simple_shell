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
	int i, interactive_mode = isatty(STDIN_FILENO);

	do
	{
		line = printing_prompt(input);
		command_args = parsing_command(line);
		if (command_args != NULL && command_args[0] != NULL)
		{
			executing_command(command_args);
			free(line);
			for (i = 0; command_args[i] != NULL; i++)
			{
				free(command_args[i]);
			}
			free(command_args);
		}
		else if (!interactive_mode)
		{
			break;
		}
	} while (interactive_mode);
}
