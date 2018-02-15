#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory and sets memory to zero
 * @nmemb: number of elements to be allocated
 * @size: size of the elements
 *
 * Return: if successful returns a pointer to allocated memory set to zero.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *set;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	set = ptr;

	for (x = 0; x < nmemb * size; x++)
		set[x] = '\0';
	return (ptr);
}
