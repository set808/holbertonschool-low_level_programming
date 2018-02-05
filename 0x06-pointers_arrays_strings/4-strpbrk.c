#include "holberton.h"

/**
 * _strpbrk - scans a string for any byte in a set of bytes
 * @s: string to be scanned
 * @accept: set of bytes to be matched
 *
 * Return: returns a pointer to the first match
 */

char  *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;
	char *found = 0;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				found = &*(s + x);
				return (found);
			}
		}
	}
	return (found);
}
