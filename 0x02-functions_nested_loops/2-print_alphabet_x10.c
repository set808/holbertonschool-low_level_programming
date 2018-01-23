#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by a new
 * line 10 times
 */

void print_alphabet_x10(void)
{

	int a, i, z;

	z = 'z';

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= z; a++)
			_putchar(a);
		_putchar('\n');
	}
}
