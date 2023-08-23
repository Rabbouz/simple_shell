#include "shell.h"
/**
 * _execute_ - A function that execute status of commands
 * @parts: commands
 * @av: arguments passed to shell
 * Return: exit status
*/

int _execute_(char **parts, char **av)
{
	pid_t child;
	int status;

	child = fork();


	if (child == 0)
	{
		if (execve(parts[0], parts, environ) == -1)
		{
			perror(av[0]);
			f2d(parts);
			exit(100);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		f2d(parts);
	}
	return (WEXITSTATUS(status));
}
