#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (count);

	if (*(s + 1) != '\0')
		count += _strlen_recursion(s + 1);
	return (count);
}
