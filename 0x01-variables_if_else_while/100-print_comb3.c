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
	int count;

	ones = 1;
	tens = 0;
	count = 1;
	while (tens  <= 8)
	{
		while (ones <= 9)
		{
			if (tens != 0 || ones != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(tens + '0');
			putchar(ones + '0');
			ones++;
		}
		count++;
		ones = count;
		tens++;
	}
	putchar('\n');
	return (0);
}
