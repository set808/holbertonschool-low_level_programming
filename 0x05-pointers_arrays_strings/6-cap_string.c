#include "holberton.h"

/**
 * is_sep - checks if character is a seperator
 * @c: character to be checked
 *
 * Return: if seperator return 1. Otherwise return 0;
 */

int is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' ||
	    c == ';' ||	c == '.' || c == '!' || c == '?' ||
	    c == '"' || c == '(' || c == ')' || c == '{' ||
	    c == '}')
		return (1);
	else
		return (0);
}

/**
 * cap_string - capitalizes all words in a string
 * @s: string to be capitalized
 *
 * Return: returns capitalized strings
 */

char *cap_string(char *s)
{
	int x, upper;

	upper = -32;
	for (x = 0; *(s + x) != '\0'; x++)
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
		{
			if (*(s + x) == *s || is_sep(*(s + x - 1)))
				*(s + x) += upper;
		}
	}
	return (s);
}
