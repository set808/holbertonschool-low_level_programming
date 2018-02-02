#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to array being reversed
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int *rev, *reg, temp, x;

	rev = a;
	reg = a;

	for (x = 0; x < n - 1; x++)
		rev++;

	for (x = 0; x < n / 2; x++)
	{
		temp = *rev;
		*rev = *reg;
		*reg = temp;
		reg++;
		rev--;
	}
}
