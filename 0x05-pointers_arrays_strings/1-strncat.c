#include "holberton.h"

/**
 * _strncat - concatenates string with a certain amount of bytes from
 *second string.
 * @dest: destination string to be appended to
 * @src: source string to append to destination
 * @n: number of bytes of src to be used
 *
 * Return: returns a pointer to concatenated string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	/* Find length of first string */
	for (x = 0; *(dest + x) != '\0'; x++)
		;
	/* Append src to dest and check if byte is empty*/
	for (y = 0; y < n && *(src + y) != '\0'; y++)
	{
		*(dest + x) = *(src + y);
		x++;
	}
	/* Add null terminator to dest */
	*(dest + x) = '\0';
	return (dest);

}
