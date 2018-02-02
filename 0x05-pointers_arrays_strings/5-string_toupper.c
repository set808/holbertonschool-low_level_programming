#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s - string being modified
 *
 */

char *string_toupper(char *s)
{
	int x;
	int upper = -32;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		if (*(s + x) >= 'a' && *(s+x) <= 'z')
			*(s + x) += upper;
	}

	return (s);
}
