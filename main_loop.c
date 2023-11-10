#include "main.h"

/**
 * main_loop - the function which runs the shell forever until it is exited.
 * Return: no return value
 */

void  main_loop()
{
	char *line = NULL;
	int i;
	//char **command_args = NULL;

	while (1)
	{
		line = printing_prompt();
		//command_args = parsing_command(line);
		printf("this is the full command :%s\n", line);
	}
	//printf("this is the full command :%s\n", line);
	free(line);
}
