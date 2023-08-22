#include "shell.h"

/**
 * main - main function of simple shell
 * @argc: count of arguments
 * @av: actual arguments
 *
 * Return: 0 Always (success)
*/

int main(int argc, char **av)
{
	char *input = NULL;
	char **parts = NULL;
	int itr = 0;
	/*int exc_status = 0;*/
	(void) argc;
	(void) av;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		input = rd_line();
		if (input == NULL)
		{
			return (0);
			free(input);
		}

		parts = parse_in(input);
		if (!parts)
		{
			continue;
		}
		for (itr = 0; parts[itr]; itr++)
		printf("%s\n", parts[itr]);
		/*exc_status = execute_commands(parts, av);*/
	}
}
