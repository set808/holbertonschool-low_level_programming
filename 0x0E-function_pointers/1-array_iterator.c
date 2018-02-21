#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array being manipulated
 * @size: size of the array
 * @action: function being called on each element
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
