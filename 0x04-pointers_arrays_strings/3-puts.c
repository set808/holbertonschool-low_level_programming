#include "holberton.h"
/**
 * _puts - prints a string followed by a newline
 * @str: string that gets printed
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
