#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 from 0
 * Return: returns 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
