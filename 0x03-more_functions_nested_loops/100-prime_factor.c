#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long number, low_factor, big_factor;

	number = 612852475143;
	big_factor = 3;

	for (low_factor = 2; number != 1; number /= low_factor)
	{
		while (number % low_factor != 0)
			low_factor++;
		if(low_factor > big_factor)
			big_factor = low_factor;
	}
	printf("%ld\n", big_factor);
	return (0);
}
