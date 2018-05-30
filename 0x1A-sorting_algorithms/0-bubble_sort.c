#include "sort.h"
/**
 * bubble_sort - sorts an array of int using Bubble sort algorithm
 * @array: the array to perform the sort on
 * @size: the size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int temp, i, length;
	if (size == 0)
		return;
	for(length = 0; array[length]; length++)
		;
	temp = 0;
	i = 0;
	while (i < size)
	{
		if (array[i] > array [i + 1] && array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, length);
		}
		i++;
	}
	bubble_sort(array, size - 1);
}
