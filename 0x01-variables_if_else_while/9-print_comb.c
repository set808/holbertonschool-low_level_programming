#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers seperated by commas and a space
 * Return: returns 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
