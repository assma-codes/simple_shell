#include "main.h"

/**
 * parsing_command - function that tkenizes a string.
 * @command_line: the command entered by user to be tokenized.
 * Return: pointer to array of string after tokenizing.
 */

char **parsing_command(char *command_line)
{
	char *delimiter = " ";
	char *command_line_copy = NULL, *token = NULL, **array_of_tokens;
	int token_counter = 0, i;

	command_line_copy = malloc(sizeof(char) * (strlen(command_line) + 1));
	if (command_line_copy == NULL)
	{
		perror("MASS: allocation failure of copy");
		return (NULL);
	}
	strcpy(command_line_copy, command_line);
	token = strtok(command_line, delimiter);
	while (token != NULL)
	{
		token_counter++;
		token = strtok(NULL, delimiter);
	}
	token_counter++;
	array_of_tokens = malloc(sizeof(char *) * token_counter);
	if (array_of_tokens == NULL)
	{
		perror("MASS: allocation failure for array");
		return (NULL);
	}
	token = strtok(command_line_copy, delimiter);
	for (i = 0; token != NULL; i++)
	{
		array_of_tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		strcpy(array_of_tokens[i], token);
		token = strtok(NULL, delimiter);
	}
	array_of_tokens[i] = NULL;
	free(command_line_copy);
	return (array_of_tokens);
}
