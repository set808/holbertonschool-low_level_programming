#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to newly allocated space in memory that contains
 * a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: returns a pointer to the copied string
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int x;
	char *s;

	s = malloc(*str);
	for (x = 0; str[x]; x++)
		s[x] = str[x];
	return (s);
}
