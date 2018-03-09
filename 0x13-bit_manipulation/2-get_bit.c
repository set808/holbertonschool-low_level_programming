#include "holberton.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit to return
 *
 * Return: returns the value of the bit at index or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index == 0 && n == 0)
		return (0);
	if (index >=  n)
		return (-1);
	mask = 1;
	mask <<= index;

	if (n & mask)
		return (1);
	else
		return (0);
}
