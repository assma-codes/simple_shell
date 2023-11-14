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

/* Global Variables */
extern char **environ;


/* simple shell functions prototypes*/

char *printing_prompt();
char **parsing_command(char *command_line);
void main_loop();
char *abs_path(char *command);
void executing_command(char **argv);
void print_f(const char *str);
void handle_exit(void);

/* Macros */
#define MAXIMUM_COMMAND 1024


#endif
