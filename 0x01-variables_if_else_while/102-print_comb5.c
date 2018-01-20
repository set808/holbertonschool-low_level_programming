#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: returns 0
 */
int main(void)
{
	int count1;
	int count2;

	count1 = 0;
	count2 = count1 + 1;
	while (count1 <= 98)
	{
		while (count2 <= 99)
		{
			putchar((count1 / 10) + '0');
			putchar((count1 % 10) + '0');
			putchar(' ');
			putchar((count2 / 10) + '0');
			putchar((count2 % 10) + '0');
			if (!(count1 == 98 && count2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
			count2++;
		}
		count1++;
		count2 = count1 + 1;
	}
	putchar('\n');
	return (0);
}
