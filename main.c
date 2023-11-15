#include "main.h"

/**
 * main - the main function which represents the entry poit to the program.
 * @ac: number of arguments.
 * @av: array of strings which represents command with arguments.
 * Return: 0 on success, -1 on failure.
 */

int main(int ac, char **av)
{
	FILE *input;

	if (ac > 1)
	{
		input = fopen(av[1], "r");
		if (input == NULL)
		{
			perror("Error opening input file");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (isatty(fileno(stdin)))
		{
			input = stdin;
		}
		else
		{
			print_f("Error: No input source specified.\n");
			exit(EXIT_FAILURE);
		}
	}
	main_loop(input);
	if (ac > 1)
	{
		fclose(input);
	}
	return (0);
}
