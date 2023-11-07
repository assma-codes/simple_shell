#ifndef MAIN_H
#define MAIN_H



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
char* printing_prompt();
void main_loop();


#define COMMAND_BUFSIZE 1024


#endif
