#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

void _prompt(void);
int _read(void);
int _tokenize(char **buffer, ssize_t *num);
void _pid(char **argv);
int _exec(char **argv);

#endif
