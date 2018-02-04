#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string being encoded
 *
 * Return: returns a string encoded in rot13
 */

char *rot13(char *s)
{
	int x, y;
	char *reg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(reg + y) != '\0'; y++)
		{
			if (*(s + x) == *(reg + y))
			{
				*(s + x) = *(rot + y);
				break;
			}
		}
	}
	return (s);
}
