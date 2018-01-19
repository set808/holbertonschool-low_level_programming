#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: returns 0
 */
int main(void)
{
	int n;
	char ch;

	n = 0;
	ch = 'a';
	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
