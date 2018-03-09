#include "holberton.h"
/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: the number
 * @index: the index of the bit to return
 *
 * Return: returns the value of the bit at index or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int max_bits;

	max_bits = sizeof(n) * 8;
	if (index >  max_bits)
		return (-1);
	mask = 1;
	mask <<= index;

	*n |= mask;
	return (1);
}
