#include "holberton.h"

/**
 * _memset - fills memory wiht a constant byte
 * @s: pointer to memory location
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: returns a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}
