#include "shell.h"
/**
 * f2d - A function that frees memory allocated
 *  for an array of strings.
 * @arr: array of strings to be freed.
 * Return: void
 */
void f2d(char **arr)
{
	int i = 0;

	while (arr[i])
	{
		free(arr[i]),arr[i] = NULL;
		i++;
	}
	free(arr), arr = NULL;
}
