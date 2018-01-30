#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed
 *
 */

void print_array(int *a, int n)
{
	int x, *temp;

	temp = a;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(temp + x));
		if (x < n - 1)
			printf(", ");
	}
	putchar('\n');
}
