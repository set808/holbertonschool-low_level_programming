#include "holberton.h"

/**
 * more_numbers - prints the numbers 0 to 14, 10 times
 *
 */

void more_numbers(void)
{
	int x, num;

	for (x = 0; x < 10; x++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
