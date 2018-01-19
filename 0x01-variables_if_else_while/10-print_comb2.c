#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers seperated by commas and a space
 * Return: returns 0
 */
int main(void)
{
	int ones;
	int tens;

	ones = 0;
	tens = 0;
	while (tens  <= 9)
	{
		while (ones <= 9)
		{
			if (tens != 0 || ones != 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(tens + '0');
			putchar(ones + '0');
			ones++;
		}
		ones = 0;
		tens++;
	}
	putchar('\n');
	return (0);
}
