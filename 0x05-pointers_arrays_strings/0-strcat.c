#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string to be appended to
 * @src: source string to append to destination
 *
 * Return: returns a pointer to concatenated string dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	/* Find length of first string */
	for (x = 0; *(dest + x) != '\0'; x++)
		;
	/* Append src to dest */
	for (y = 0; *(src + y) != '\0'; y++)
	{
		*(dest + x) = *(src + y);
		x++;
	}
	/* Add null terminator to dest */
	*(dest + x) = *(src + y);
	return (dest);

}
