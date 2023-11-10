#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
/* used Standard Libraries */

=======
/* Standard Libraries */
>>>>>>> 8b097b0f719d673bdadd38dffe5b49bb165014f3
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

<<<<<<< HEAD
/* functions prototypes*/

char* printing_prompt(void);
char** parsing_command(char* command_line);
void main_loop(void);
=======
/*simple shell functions prototypes*/
char *printing_prompt();
void main_loop();
char **parsing_command(char *command_line);
>>>>>>> 8b097b0f719d673bdadd38dffe5b49bb165014f3

/* Macros */
#define COMMAND_BUFSIZE 1024


#endif
