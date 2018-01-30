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
 * rev_string - reverses a string
 * @s: string that will be reversed
 *
 */

void rev_string(char *s)
{
	char *rev, *reg, temp;
	int x, length;

	rev = s;
	reg = s;
	length = _strlen(s);

	for (x = 0; x < length - 1; x++)
		rev++;

	for (x = 0; x < length / 2; x++)
	{
		temp = *rev;
		*rev = *reg;
		*reg = temp;
		reg++;
		rev--;
	}
}
