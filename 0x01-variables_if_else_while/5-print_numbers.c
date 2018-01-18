#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 from 0
 * Return: returns 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("%s", "\n");
	return (0);
}
