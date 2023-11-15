#ifndef __SHELL_H__
#define __SHELL_H__

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>


void disp_prompt(void);
void _print(const char *str);
void _read_input(char *comm, size_t size);
void _exec(char *comm);
char *_strcat(char *dest, char *src);

#endif
