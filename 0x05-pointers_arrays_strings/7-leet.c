#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string being encoded
 *
 * Return: returns a string encoded in 1337
 */

char *leet(char *s)
{
	int x, y, upper;
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	char number[5] = {'4', '3', '0', '7', '1'};

	upper = -32;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(letter + y) != '\0'; y++)
		{
			if (*(s + x) == *(letter + y) ||
			    *(s + x) == *(letter + y) + upper)
				*(s + x) = *(number + y);
		}
	}
	return (s);
}
