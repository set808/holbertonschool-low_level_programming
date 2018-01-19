#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible different 3 digit combinations
 * Return: returns 0
 */
int main(void)
{
	int ones, tens, hundreds, count, one_count, ten_count;

	ones = 2;
	tens = 1;
	hundreds = 0;
	count = 2;
	one_count = 1;
	ten_count = 0;
	while (hundreds <= 7)
	{
		while (tens <= 8)
		{
			while (ones <= 9)
			{
				if (tens != 1 || ones != 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				ones++;
			}
			count++;
			ones = count;
			tens++;
		}
		one_count++;
		count = one_count;
		ten_count++;
		tens = ten_count;
		hundreds++;
	}
	putchar('\n');
	return (0);
}
