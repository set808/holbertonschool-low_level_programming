#include "holberton.h"

/**
 * _strspn - scans a string for length of initial characters
 * that match set of bytes.
 * @s: string to be scanned
 * @accept: set of bytes to be matched
 *
 * Return: returns the number of bytes that match the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, count;

	count = 0;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				count++;
				break;
			}
			else if (*(accept + y + 1) == '\0' &&
				 *(s + x) != *(accept + y))
			{
				return (count);
			}
		}
	}
	return (count);
}
