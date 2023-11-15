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

void _exec(char *comm)
{
	pid_t child_pid = fork();
	char *_exit = "exit";

	if (strcmp(_exit, comm) == 0)
	{
		exit(0);
	} else
	{
		if (child_pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		} else if (child_pid == 0)
		{
			char *args[120];
			int count = 0;
			char *token = strtok(comm, " ");

			while (token != NULL)
			{
				args[count++] = token;
				token = strtok(NULL, " ");
			}
			args[count] = NULL;

			execvp(args[0], args);

			_print("command not found.\n");
			exit(EXIT_FAILURE);

		} else
		{
			wait(NULL);
		}

	}
}
