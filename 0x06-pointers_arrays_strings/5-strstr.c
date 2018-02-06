#include "holberton.h"

/**
 * _strstr - locates a substring within another string
 * @haystack: string to be searched
 * @needle: string to be located
 *
 * Return: returns a pointer to beginning of located substring, or NULL
 * if substring isn't found
 */

char  *_strstr(char *haystack, char *needle)
{
	unsigned int x, y, matched;
	char *found = 0;

	matched = 0;

	if (*needle == '\0')
		return (found);

	for (x = 0; *(haystack + x) != '\0'; x++)
	{
		if (*(haystack + x) == *needle)
		{
			matched = 1;
			for (y = 0; *(needle + y) != '\0'; y++)
			{
				if (*(haystack + x + y) != *(needle + y))
				{
					matched = 0;
					break;
				}
			}
			if (matched)
			{
				found = &*(haystack + x);
				return (found);
			}
		}
	}
	return (found);
}
