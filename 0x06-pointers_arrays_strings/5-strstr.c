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
	char *hp, *np;

	while (*haystack != '\0')
	{
		hp = haystack;
		np = needle;

		while (*haystack != '\0' && *np != '\0' && *haystack == *np)
		{
			haystack++;
			np++;
		}
		if (*np == '\0')
			return (hp);
		haystack = hp + 1;
	}
	return (0);
}
