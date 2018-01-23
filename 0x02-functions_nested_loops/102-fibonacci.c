#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0;
 */

int  main(void)
{
	int i;
	float x, y, z;

	x = 1;
	y = 2;

	printf("%f, ", x);
	printf("%f", y);
	for (i = 0; i < 48; i++)
	{
		z = x + y;
		printf(", %.0f", z);
		x = y;
		y = z;
	}
	putchar('\n');
	return (0);
}
