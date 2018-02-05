#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to get diagonals
 * @size: size of the square
 *
 */

void print_diagsums(int *a, int size)
{
	int d1, d2, x, sum1, sum2, *temp;

	d1 = (size + 1);
	d2 = (size - 1);
	sum1 = 0;
	sum2 = 0;
	temp = a;

	for (x = 0; x < size; x++)
	{
		sum1 += *temp;
		temp  = &*(temp + d1);
	}
	temp = &*a;
	for (x = 0; x < size; x++)
	{
		temp = &*(temp + d2);
		sum2 += *temp;
	}
	printf("%d, %d\n", sum1, sum2);
}
