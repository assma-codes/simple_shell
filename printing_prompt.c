#include "main.h"

/**
 *printing_prompt - function that prints the shell prompt.
 *Return: pointer to char which is the command has been red from user.
 */
char** printing_prompt()
{
	char *shell_prompt = "MASS$";
	char *command_line = NULL;
	size_t n_of_chars = 0;
	ssize_t char_of_commandline;
	char **command_args = NULL;

	/*write(1, &shell_prompt, strlen(shell_prompt));*/
	printf("%s", shell_prompt);
	char_of_commandline = getline(&command_line, &n_of_chars, stdin);
	if (char_of_commandline == -1)
	{
		exit(EXIT_FAILURE);
	}
	else if (feof(stdin))
	{
		exit(EXIT_SUCCESS);
	}
	command_args = parsing_command(command_line);
	printf("this is arg[0] : %s\n", command_args[0]);
	//printf("%s", command_line);
	free(command_line);
	/*return (command_line);*/
	return (command_args);
}
