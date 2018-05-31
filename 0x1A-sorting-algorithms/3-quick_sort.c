#include "sort.h"
/**
 * swap - swaps values in an array
 * @a: first index
 * @b: second index
 *
 */
void swap(int *array, unsigned int a, unsigned int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

/**
 * partition - partition algorithm
 * @array - the array
 * @low: the index of the partition wall
 * @high: the index of the pivot
 *
 *Return: returns the location to place the pivot
 *
 */
unsigned int partition(int *array, int low, int high, size_t size)
{
	int x, y;
	int pivot;

	x = low - 1;
	pivot = array[high];

	y = low;
	while (y < high - 1)
	{
		if (array[y] < pivot)
		{
			x++;
			swap(array, x, y);
			print_array(array, size);
		}
		y++;
	}
	swap(array, x + 1, high);
	print_array(array, size);
	return (x + 1);
}

/**
 * qs_function - actual quick sort alogorithm
 * @array: the array
 * @lo: the low index
 * @hi: the high index
 *
 */
void qs_function(int *array, unsigned int lo, unsigned int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		qs_function(array, lo, p - 1, size);
		qs_function(array, p + 1, hi, size);
	}
}

/**
 * quick_sort - implementing the quick sort algorithm
 * @array: the array
 * @size: size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	qs_function(array, 0, size - 2, size);
}
