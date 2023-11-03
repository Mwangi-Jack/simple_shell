#include "shell.h"
#include <string.h>

/**
 * _print - Function
 *
 * Description:  function to print character to standard output
 *
 * @str: character to print
 *
 * Return: returns nothing (void)
*/


void _print(const char *str)
{
	write(1, str, strlen(str));
}

