#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to get last digit from
 *
 * Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result = -result;

	_putchar(result + '0');
	return (result);
}
