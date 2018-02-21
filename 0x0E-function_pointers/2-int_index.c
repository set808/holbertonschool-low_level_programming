#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be searched through
 * @size: number of elements in the array
 * @cmp: pointer to a function to be used to compare values
 *
 * Return: returns the index of the first element for which the cmp function
 * does not return 0. if no element matches, return -1. if size <= 0, return
 * -1.
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
