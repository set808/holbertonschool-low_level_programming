#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers for a certain range
 * @min: minimum value
 * @max: max value
 *
 * Return: return a pointer to the array on success. returns NULL on failure
 */

int *array_range(int min, int max)
{
	int x, value,  *ptr;

	value = min;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; value <= max; x++)
	{
		ptr[x] = value;
		value++;
	}
	return (ptr);
}
