#include "shell.h"
/**
 * parse_in - A function that okenizes an input string
 * into an array of strings.
 * @input: input string to be tekenized
 * Return: Array of strings,or NULL on failure
*/
char **parse_in(char *input)
{
	char **commands, *temp, *token = NULL;
	char  dlm[] = " \n\t";
	int counter, itr = 0;

	if (!input)
	{
		return (NULL);
	}
	temp = _strdup(input);
	token = strtok(temp, dlm);
	if (token == NULL)
	{
		free(input), input = NULL;
		free(temp), temp = NULL;
		return (NULL);
	}
	while (token)
	{
		counter++;
		token = strtok(NULL, dlm);
	}
	free(temp), temp = NULL;
	commands = malloc(sizeof(char *) * (counter + 1));
	if (!commands)
	{
		free(input), input = NULL;
		return (NULL);
	}
	token = strtok(input, dlm);
	while (token)
	{
		commands[itr] = _strdup(token);
		token = strtok(NULL, dlm);
		itr++;
	}
	free(input), input = NULL;
	commands[itr] = NULL;
	return (commands);
}
