#include "shell.h"

/**
 * _read_input - Function
 *
 * Description: function to read user input and tokenize it
 *
 * @comm: input to tokenize
 * @size: size of input
 *
 * Return: returns nothing (void)
*/

void _read_input(char *comm, size_t size)
{
	if (fgets(comm, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			_print("\n");
			exit(EXIT_SUCCESS);
		} else
		{
			perror("fgets");
			_print("Error while reading input. \n");
			exit(EXIT_FAILURE);
		}
	}
	comm[strcspn(comm, "\n")] = '\0';
}
