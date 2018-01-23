#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0;
 */

int  main(void)
{
	int i;
	long long x, y, z;

	x = 1;
	y = 2;

	printf("%lli, ", x);
	printf("%lli", y);
	for (i = 0; i < 48; i++)
	{
		z = x + y;
		printf(", %lli", z);
		x = y;
		y = z;
	}
	putchar('\n');
	return (0);
}
