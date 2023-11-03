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
	char comm[100];

	while (true)
	{
		disp_prompt();
		_read_input(comm, sizeof(comm));
		_exec(comm);
	}

	return (0);
}
