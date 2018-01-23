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
		else if (result >= 10)
		{
			_putchar(' ');
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar((result) + '0');
		}
}

/**
 * format_row - formats a row of multiplication table
 * @y: represents second factor in multiplication table
 */
void format_row(int y)
{
	if (y != 9)
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
 * times_table - prints the 9 times table
 *
 * Return: no return value
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			format_product(x, y);
			format_row(y);
		}
	}
}
