#include "main.h"
/**
 * print_f - writes string to stdout
 * @str: string
 */
void print_f(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));

}
