#include "main.h"

/**
 * main_loop - the infinite loop of the program.
 */
void main_loop()
{
	char *line;
	char **command_args;

        while(1)
        {
		line = printing_prompt();
		command_args = parsing_command(line); 
        }
	free(line);
	free(command_args);
}
