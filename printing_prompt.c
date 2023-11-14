#include "main.h"

/**
 *printing_prompt - function that prints the shell prompt.
 *Return: pointer to char which is the command has been red from user.
 */
char *printing_prompt(void)
{
	char *shell_prompt = "MASS $ ";
	char *command_line = NULL;
	size_t n_of_chars = 0;
	ssize_t char_of_commandline;

	write(STDOUT_FILENO, shell_prompt, strlen(shell_prompt));
	char_of_commandline = getline(&command_line, &n_of_chars, stdin);
	if (char_of_commandline == -1)
	{
		_putchar('\n');
		exit(EXIT_FAILURE);
	}
	n_of_chars = strlen(command_line);
	if (n_of_chars > 0 && command_line[n_of_chars - 1] == '\n')
	{
		command_line[n_of_chars - 1] = '\0';
	}
	return (command_line);
}
