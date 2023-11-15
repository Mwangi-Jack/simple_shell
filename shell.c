#include "shell.h"
#include <stdbool.h>

/**
 * main - Entry Point
 *
 * Return: Always Success (0)
*/

int main(void)
{
	char comm[1024];

	while (true)
	{
		_read_input(comm, sizeof(comm));
		_exec(comm);
	}

	return (0);
}
