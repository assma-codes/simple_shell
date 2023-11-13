#include "main.h"

/**
 * executing_command - function that execute entered command
 * @argv: pointer to string
 * Return: no return value
 */

void executing_command(char **argv)
{
	pid_t child_proccess;

	if (argv && argv[0])
	{
		char *complete_command = argv[0];
		char *excat_command = abs_path(complete_command);

		if (excat_command != NULL)
		{
			child_proccess = fork();
			if (child_proccess == 0)
			{
				if (execve(excat_command, argv, NULL) == -1)
				{
					perror("Error executing command");
				}
			}
			else if (child_proccess > 0)
			{
				int status;

				wait(&status);
			}
		}
		else
		{
			printf("Command not found: %s\n", complete_command);
		}
	}
	else
	{
		printf("Invalid command\n");
	}
}
