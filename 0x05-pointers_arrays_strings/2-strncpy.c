#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: string to be copied
 * @n: number of bytes to copy
 *
 * Return: return a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x) != '\0'; x++)
		*(dest + x) = *(src + x);
	for ( ; x < n; x++)
		*(dest + x) = '\0';
	return (dest);
}
