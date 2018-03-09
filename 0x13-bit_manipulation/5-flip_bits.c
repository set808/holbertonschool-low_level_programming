#include "holberton.h"
/**
 * flip_bits - sets the value of a bit at a given index to 0
 * @n: first number
 * @m:second number
 *
 * Return: returns the value of the bit at index or -1 on failure
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int count;

	flip = n ^ m;

	count = 0;
	while (flip > 0)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
