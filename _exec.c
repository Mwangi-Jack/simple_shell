#include "shell.h"

/**
 * _exec - Function
 *
 * Description: this function executes a commdns
 *
 * @comm: command to execute
 *
 * Return: returns nothing (void)
*/

void _exec(const char *comm)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (child_pid == 0)
	{
		execlp(comm, comm, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	} else
	{
		wait(NULL);
	}
}
