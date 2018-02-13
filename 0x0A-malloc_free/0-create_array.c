#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: returns a pointer to the initalized array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	for (x = 0; x < size ; x++)
		s[x] = c;
	return (s);
}
