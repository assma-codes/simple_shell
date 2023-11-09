#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

/*simple shell functions prototypes*/
char *printing_prompt();
void main_loop();
char **parsing_command(char *command_line);

/* Macros */
#define COMMAND_BUFSIZE 1024


#endif
