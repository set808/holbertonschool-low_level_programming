#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in terminal
 * @n: the number of times the character '\' is to be printed
 *
 */

void print_diagonal(int n)
{
	int x, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (space = 0; space < x; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
