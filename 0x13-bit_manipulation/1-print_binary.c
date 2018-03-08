#include "holberton.h"
/**
 * get_mask - get the correct size mask
 *
 * Return: returns the correct mask size for unsigned long int
 */
/*unsigned int get_mask(void)
{
	unsigned long int mask;

	mask = 0;
	mask = ~mask;
	mask >>= 1;
	mask = ~mask;
	return (mask);
	}*/
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned int token;
	unsigned long int mask;

	token = 0;
	mask = 0;
	mask = ~mask;
	mask >>= 1;
	mask = ~mask;
	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{

		if ((n & mask) == 0 && token != 1)
		{
			mask = mask >> 1;
			continue;
		}

		if ((n & mask) != 0)
		{
			token = 1;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}
