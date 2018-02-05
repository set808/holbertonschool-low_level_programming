#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: multidemensional array to be printed
 *
 */

void print_chessboard(char (*a)[8])
{
	unsigned int column, row, x, y;

	column = sizeof(a[0]);
	row = column / sizeof(a[0][0]);

	for (x = 0; x < row; x++)
	{
		for (y = 0; y < column; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
