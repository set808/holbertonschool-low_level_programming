#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @str: string that gets printed
 *
 */

void print_rev(char *s)
{
	int x;
	char *temp = s;

	for(x = 1; *temp != '\0'; x++)
		temp++;
	for(temp -= x; x > 0; x--)
	{
		_putchar(*(temp + x));
	}
	_putchar('\n');

}
