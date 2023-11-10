#include "main.h"

/**
 * main_loop - the function which runs the shell forever until it is exited.
 * Return: no return value
 */

void  main_loop(char** command_args)
{
	//char *line;
	int i;
	//command_args = NULL;

	while (1)
	{
		//line = printing_prompt();
		char** line = printing_prompt();
		for (i = 0; i < 3; i++)
		{
		printf("in the main loop tokens are:%s\n", line[i]);
		}
	}
		//command_args = parsing_command(line);
}
