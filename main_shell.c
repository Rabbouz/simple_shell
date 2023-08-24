#include "shell.h"

/**
 * main - shell main function
 * @argc: count of arguments
 * @av: actual arguments
 * Return: Always 0
*/
int main(int argc, char **av)
{
	char *input = NULL;
	char **parts = NULL;
	int status = 0;
	(void) argc;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		input = rd_line();
		if (input == NULL) /*ctrl D*/
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		parts = parse_in(input);
		if (!parts)
		{
			free(input);
			continue;
		}
		status = _execute_(parts, av);
	}
	return (status);
}
