#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string that gets printed
 *
 */

void print_rev(char *s)
{
	int x;
	char *temp = s;

	for (x = 0; temp != '\0'; x++)
		temp++;
	temp--;
	while (x >= 0)
	{
		_putchar(*temp);
		temp--;
		x--;
	}
	_putchar('\n');

}
