#include "shell.h"
#include <stdbool.h>

/**
 * main - Entry Point
 *
 * @argc: argument count
 * @argv: argument vector
 * @env: environment variables
 *
 * Return: Always Success (0)
*/

int main(int  __attribute__((unused)) argc, char  __attribute__((unused)) *argv[])
{

	while (true)
		_print("$ ");

	return (0);
}
