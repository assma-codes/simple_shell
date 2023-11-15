#include "main.h"

/**
 * executing_command - function that execute entered command
 * @argv: pointer to string
 * Return: no return value
 */

void executing_command(char **argv)
{
	pid_t child_process;
	char *logout = "exit", *exact_command;
	int status;

	if (argv && argv[0])
	{
		char *complete_command = argv[0];

		exact_command = abs_path(complete_command);
		if (_strcmp(complete_command, logout) == 0)
		{
			free(complete_command);
			handle_exit();
		}
		if (exact_command != NULL && _strchr(exact_command, '/') != NULL)
		{
			child_process = fork();
			if (child_process == 0)
			{
				if (execve(exact_command, argv, environ) == -1)
				{
					perror("Error executing command");
				}
			}
			else if (child_process > 0)
			{
				waitpid(child_process, &status, 0);
				if (WIFEXITED(status) && WEXITSTATUS(status) == 127)
					print_f("Command Not Found\n");
			}
		}
		else
		{
			print_f(argv[0]);
			print_f(" : not found\ni");
		}
		free(exact_command);
	}
	else
	{
		print_f("Invalid command\n");
	}
}
