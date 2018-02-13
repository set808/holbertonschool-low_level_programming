#include <stdlib.h>
#include "holberton.h"

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

	s = malloc(sizeof(*s1 + *s2));

	for (x = 0; s1[x]; x++)
		s[x] = s1[x];
	for (y = 0; s2[y] ; y++)
		s[x + y] = s2[y];
	s[x + y] = '\0';
	return (s);
}
