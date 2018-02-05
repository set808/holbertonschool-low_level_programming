#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be found
 *
 * Return: returns a pointer to the first occurence of character c.
 * returns NULL if the character isn't found.
 */

char *_strchr(char *s, char c)
{
	int x;
	char *found = 0;

	for (x = 0; *(s + x + 1) != '\0'; x++)
	{
		if (*(s + x) == c)
		{
			found = &*(s + x);
			break;
		}
	}
	return (found);
}
