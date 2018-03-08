#include "holberton.h"
/**
 * binary_check - checks for valid binary number
 * @b: the binary number
 *
 * Return: returns 1 if valid, 0 if invalid
 */
unsigned int binary_check(const char *b)
{
	unsigned int x;

	x = 0;
	while (b[x] != '\0')
	{
		if (!(b[x] ==  '1' || b[x] == '0'))
			return (0);
		x++;
	}
	return (1);
}
/**
 * max_power - gets the maximum power needed for a binary number
 * @b: the binary number
 *
 * Return: returns the maxium power needed
 */
unsigned int max_power(const char *b)
{
	unsigned int x;

	x = 0;
	while (b[x] != '\0')
		x++;
	return (x - 1);
}
/**
 * _pow - returns a number to x power
 * @num: number
 * @x: power
 *
 * Return: returns the powered number
 */
unsigned int _pow(unsigned int num, unsigned int x)
{
	unsigned int result, count;

	result = 1;
	count = 0;
	if (x == 0)
		return (result);
	while (count < x)
	{
		result *= num;
		count++;
	}
	return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: returns the converted number or 0 if failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, pow, x;

	if (b == NULL || binary_check(b) == 0)
		return (0);
	pow = max_power(b);
	x = 0;
	result = 0;
	while (b[x] != '\0')
	{
		if (b[x] == '1')
			result += _pow(2, pow);
		x++;
		pow--;
	}
	return (result);
}
