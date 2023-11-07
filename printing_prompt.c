#include "main.h"

/**
 *
 */

char *printing_prompt()
{
	char *shell_prompt = "MASS$";
	char *command_line;
	size_t n_of_chars = 0;
	
	//write(1, &shell_prompt, strlen(shell_prompt));
	printf("%s", shell_prompt);
	if(getline(&command_line, &n_of_chars, stdin) == -1)
	{
		exit(EXIT_FAILURE);
	}
	else if (feof(stdin))
	{
		exit(EXIT_SUCCESS);
	}
	printf("%s", command_line);
	free(command_line);
	//return (command_line);
}
