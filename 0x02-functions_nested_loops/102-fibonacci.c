#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0;
 */

int  main(void)
{
	int i;
	long  x, y, z;

	x = 1;
	y = 2;

	printf("%ld, ", x);
	printf("%ld", y);
	for (i = 0; i < 48; i++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	putchar('\n');
	return (0);
}
