#include "shell.h"
/**
 * rd_line - A function that  reads a line
 * of input from standard input.
 * Return: A pointer, or NULL on failure.
 */

char *rd_line(void)
{
	ssize_t  size;
	size_t length = 0;
	char *input = NULL;

	size = getline(&input, &length, stdin);
	if (size == -1)
	{
		free(input), input = NULL;
		return (NULL);
	}
	return (input);
}
