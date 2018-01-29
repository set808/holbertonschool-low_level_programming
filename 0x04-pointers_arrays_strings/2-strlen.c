#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	char *length;

	*length = s;

	while (*length != '\0')
		length++;
	return (length - s);
}
