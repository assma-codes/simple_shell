#include "main.h"

/**
<<<<<<< HEAD
 * main_loop - the function which runs the shell forever until it is exited.
 * Return: no return value
 */

void  main_loop()
=======
 * main_loop - the infinite loop of the program.
 */
void main_loop()
>>>>>>> 8b097b0f719d673bdadd38dffe5b49bb165014f3
{
	char *line = NULL;
	int i;
	//char **command_args = NULL;

	while (1)
	{
		line = printing_prompt();
<<<<<<< HEAD
		//command_args = parsing_command(line);
		printf("this is the full command :%s\n", line);
	}
	//printf("this is the full command :%s\n", line);
	free(line);
=======
		command_args = parsing_command(line); 
        }
	free(line);
	free(command_args);
>>>>>>> 8b097b0f719d673bdadd38dffe5b49bb165014f3
}
