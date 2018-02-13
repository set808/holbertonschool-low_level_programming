#include <stdlib.h>
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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s == NULL)
		return (NULL);

	for (x = 0; *(s1 + x); x++)
		*(s + x) = *(s1 + x);
	for (y = 0; *(s2 + y); y++)
		*(s + x + y) = *(s2 + y);
	*(s + x + y) = '\0';
	return (s);
}
