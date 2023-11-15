#include "main.h"

/**
 * handle_env - A function that  prints the current environment.
 * Return: No Return value.
 */

void handle_env(void)
{
	extern char **environ;
	int i = 0;

	while (environ[i] != NULL)
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
				write(STDOUT_FILENO, "\n", 1);
				i++;
	}
}
