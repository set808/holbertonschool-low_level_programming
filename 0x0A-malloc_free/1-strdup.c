#include <stdlib.h>
#include "holberton.h"

#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * _strdup - returns a pointer to newly allocated space in memory that contains
 * a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: returns a pointer to the copied string
 */

char *_strdup(char *str)
{
	int x;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * _strlen(str));
	if (s == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		s[x] = str[x];
	return (s);
}
