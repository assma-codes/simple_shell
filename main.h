#ifndef MAIN_H
#define MAIN_H

/* used Standard Libraries */

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

/* functions prototypes*/

char* printing_prompt(void);
char** parsing_command(char* command_line);
void main_loop(void);


#define COMMAND_BUFSIZE 1024


#endif
