#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start from
 *
 */

void print_to_98(int n)
{
	int start;

	start = n;

	if (start <= 98)
	{
		for (; start <= 98; start++)
		{
			printf("%d", start);
			if (start != 98)
				printf(", ");
		}
	}
	else
	{
		for (; start >= 98; start--)
		{
			printf("%d", start);
			if (start != 98)
				printf(", ");
		}
	}
	putchar('\n');
}
