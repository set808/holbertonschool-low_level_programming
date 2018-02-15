#include "holberton.h"
#include <stdlib.h>

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
 * string_nconcat - concatenates two strings with only n bytes of second string
 * @s1: first string to be fully concatenated
 * @s2: second string to be concatenated n bytes
 * @n: number of bytes of second string to be concatenated
 *
 * Return: returns a pointer to concatenated string on success and NULL
 * on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, y, s2_size;
	char *concat;

	s2_size = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s2_size >= _strlen(s2))
		s2_size = _strlen(s2);

	concat = malloc(sizeof(char) * (_strlen(s1) + s2_size + 1));
	if (concat == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		concat[x] = s1[x];
	for (y = 0; y < s2_size; y++)
		concat[x + y] = s2[y];
	concat[x + y] = '\0';
	return (concat);
}
