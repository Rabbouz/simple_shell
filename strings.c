#include "shell.h"
/**
 * _strdup - A function that duplicates a string in memory.
 * @str: The string to be duplicated
 * Return: A pointer, or NULL if memory allocation fails
 */
char *_strdup(const char *str)
{
	char *pointeur;
	int i, counter = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	str -= counter;
	pointeur = malloc(sizeof(char) * (counter + 1));
	if (pointeur == NULL)
		return (NULL);
	while (i <= counter)
	{
		pointeur[i] = str[i];
		i++;
	}
	return (pointeur);
}
/**
 * _strcmp - A function that compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: An integer.
 */
int _strcmp(char *s1, char *s2)
{
	int compare = 0;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	compare = (int)(*s1) - (int)(*s2);
	return (compare);
}
/**
 * _strlen - A function that calculates the length of a string
 * @s: input string
 * Return: number of characters
 */
int _strlen(char *s)
{
	int counter = 0;
	char currentCh = s[counter];

	while (currentCh != '\0')
	{
		counter++;
		currentCh = s[counter];
	}
	return (counter);
}
/**
 * _strcat - A function that concatenates two strings.
 * @destination: destination string
 * @source: source string
 * Return: A pointer.
 */
char *_strcat(char *destination, char *source)
{
	char *new = destination;

	while (*new)
		new++;
	for (; *source; new++, source++)
	{
		*new = *source;
	}
	*new = *source;
	return (destination);
}
/**
 * _strcpy - A function that copies contents of a string to another
 * @destination: destination string
 * @source: source string
 * Return: A pointer.
 */
char *_strcpy(char *destination, char *source)
{
	int itr = 0;

	while (source[itr])
	{
		destination[itr] = source[itr];
		itr++;
	}
	destination[itr] = '\0';
	return (destination);
}
