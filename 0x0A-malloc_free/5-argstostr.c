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
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: returns a pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int x, y, z, length;
	char *s;

	length = 1;
	z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);
		length += _strlen(av[x]);
	}
	length += ac;

	s = malloc(sizeof(int) * length);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; y < _strlen(av[x]); y++)
		{
			s[z] = av[x][y];
			z++;
		}
		s[z] = '\n';
		z++;
	}
	s[z] = '\0';
	return (s);
}
