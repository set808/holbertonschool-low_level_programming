#include "holberton.h"

/**
 * print_line - draws a straight line in terminal
 * @n: the number of times the character '_' is to be printed
 *
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
