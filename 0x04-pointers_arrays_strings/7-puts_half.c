#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * puts_half - prints the second half of a string
 * @str: string that will be reversed
 *
 */

void puts_half(char *str)
{
	int half;
	char *temp;

	temp = str;

	if (_strlen(temp) % 2 != 0)
		half = (_strlen(temp) - 1) / 2;
	else
		half = _strlen(temp) / 2;

	for (temp += half; *temp != '\0'; temp++)
		_putchar(*temp);
	_putchar('\n');
}
