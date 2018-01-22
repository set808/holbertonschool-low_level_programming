#include "holberton.h"

/**
 * main - prints "Holberton" followed by a new line
 * Return: returns 0 if successful
 */

int main(void)
{
	int i, array_length;
	char holberton[] = "Holberton";;

	array_length = sizeof(holberton) / sizeof(char);

	for (i = 0; i < array_length; i++)
		_putchar(holberton[i]);
	_putchar('\n');
	return (0);
}
