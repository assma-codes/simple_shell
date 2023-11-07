#include "main.h"

void  main_loop()
{
	char *line;
	char **command_args;

        while(1)
        {
		line = printing_prompt();
		command_args = command_parsing(line);
        }
}
