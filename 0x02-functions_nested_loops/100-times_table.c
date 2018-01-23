#include "holberton.h"

/**
 * format_product - spaces out products equally
 * @x: first factor
 * @y: second factor
 */
void format_product(int x, int y)
{
	int result = x * y;

		if (y == 0)
		{
			_putchar(result + '0');
		}
		else if (result >= 100)
		{
			_putchar(' ');
			_putchar(((result / 10) / 10) + '0');
			_putchar(((result / 10) % 10) + '0');
			_putchar(result % 10 + '0');
		}
		else if (result >= 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar((result) + '0');
		}
}

/**
 * format_row - formats a row of multiplication table
 * @multiplier: the increasing factor
 * @multiplicand: the constant factor
 */
void format_row(int multiplier, int multiplicand)
{
	if (multiplier != multiplicand)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_times_table - prints the 9 times table
 * @n: determines the size of n times table
 */

void print_times_table(int n)
{
	int x, y;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				format_product(x, y);
				format_row(y, n);
			}
		}
	}
}
