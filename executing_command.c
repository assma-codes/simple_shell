#include "main.h"

/**
 * executing_command - function that execute entered command
 * @argv: pointer to string
 * Return: no return value
 */

void executing_command(char **argv)
{
	pid_t child_proccess;
	char *logout = "exit";

	if (argv && argv[0])
	{
		char *complete_command = argv[0];
		char *excat_command = abs_path(complete_command);

		if (strcmp(complete_command, logout) == 0)
		{
			handle_exit();
		}
		if (excat_command != NULL)
		{
			child_proccess = fork();
			if (child_proccess == 0)
			{
				if (execve(excat_command, argv, environ) == -1)
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
			print_f("Command not found");
		}
	}
	else
	{
		print_f("Invalid command\n");
	}
}
