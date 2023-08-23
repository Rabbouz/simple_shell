#ifndef SHELL_H
#define SHELL_H

/* libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

/* global variables*/
extern char **environ;

/* prototypes */
char *rd_line(void);
char **parse_in(char *input);
int _execute_(char **parts, char **av);
void f2d(char **arr);
/*strings*/
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcat(char *destination, char *source);
char *_strcpy(char *destination, char *source);

#endif
