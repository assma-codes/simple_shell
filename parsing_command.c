#include "main.h"

/**
 *
 */

char** parsing_command(char* command_line)
{
        char *delimiter = " ";
	char *command_line_copy = NULL, *token = NULL, **array_of_tokens;
	int token_counter = 0, i;

	command_line_copy = malloc(sizeof(char) * (strlen(command_line) + 1));
	if (command_line_copy == NULL)
	{
		perror("MASS: allocation failure of copy");
		return NULL;
	}
	strcpy(command_line_copy, command_line);
		token = strtok(command_line, delimiter);
	while (token != NULL)
	{
		token_counter++;
		token = strtok(NULL, delimiter);
	}
	token_counter++;
	array_of_tokens = malloc(sizeof(char*) * token_counter);
	if (array_of_tokens == NULL)
        {
                perror("MASS: allocation failure for array");
                return NULL;
        }
	token = strtok(command_line_copy, delimiter);
	for (i = 0; token != NULL; i++)
	{
		array_of_tokens[i] = malloc(sizeof(char) * strlen(token));
		strcpy(array_of_tokens[i], token);
		printf("%s\n", array_of_tokens[i]);
		token = strtok(NULL, delimiter);
	}
	array_of_tokens[i] = NULL;
	free(command_line_copy);
	free(array_of_tokens);
	return array_of_tokens;
}

int main(int ac, char** argv)
{
	char *shell_prompt = "MASS$";
        char *command_line = NULL;
        size_t n_of_chars = 0;
	
	while (1)
	{
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
	argv = parsing_command(command_line);
	}
        free(command_line);
}

