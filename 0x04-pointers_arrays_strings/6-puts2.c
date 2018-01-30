#include "holberton.h"

/**
 * puts2 - prints every other char of a string
 * @str: string that will be reversed
 *
 */

void puts2(char *str)
{
	int count = 1;

	while (*str != '\0')
	{
		if (count % 2 != 0)
			_putchar(*str);
		str++;
		count++;
	}
	_putchar('\n');
}
