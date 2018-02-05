#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to be copied from
 * @n: number of bytes to copy
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);
	return (dest);
}
