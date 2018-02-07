#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*(s + 1) != '\0')
		count += _strlen_recursion(s + 1);
	return (count);
}
