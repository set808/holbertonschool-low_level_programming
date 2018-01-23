#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 * Return: returns 0 if successful
 */

void print_alphabet(void)
{
	int a, z;

	z = 'z';

	for (a = 'a'; a <= z; a++)
		_putchar(a);

	_putchar('\n');
}
