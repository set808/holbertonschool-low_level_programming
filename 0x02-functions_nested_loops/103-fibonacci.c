#include <stdio.h>

/**
 * main - prints the sum of the even-valued Fibonacci terms under 4,000,000
 *
 * Return: Always 0;
 */

int  main(void)
{
	int i;
	long int x, y, z, sum;

	x = 1;
	y = 2;
	sum = 2;

	for (i = 0; i < 32; i++)
	{
		z = x + y;
		if (z < 4000000 && z % 2 == 0)
			sum += z;
		x = y;
		y = z;
	}
	printf("%li\n", sum);
	return (0);
}
