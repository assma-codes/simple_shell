#include "main.h"

/**
 * abs_path - function that get the absolute path of the command
 * @command: the command entered by user
 * Return: absolute path of the comand
 */

char *abs_path(char *command)
{
	char *full_path, *full_path_copy, *file_path, *path_token;
	struct stat buf;
	char command_length, directory_length;

	command_length = _strlen(command);
	full_path = getenv("PATH");
	if (full_path)
	{
		full_path_copy = strdup(full_path);
		path_token = strtok(full_path_copy, ":");
		while (path_token != NULL)
		{
			directory_length = strlen(path_token);
			file_path = malloc(command_length + directory_length + 2);
			_strcpy(file_path, path_token);
			_strcat(file_path, "/");
			_strcat(file_path, command);
			_strcat(file_path, "\0");
			if (stat(file_path, &buf) == 0)
			{
				return (file_path);
				free(file_path);
			}
			else
			free(file_path);
			path_token = strtok(NULL, ":");
		}
	}
	free(full_path_copy);
	if (stat(command, &buf) == 0)
	{
		return (command);
	}
	return (NULL);
}
