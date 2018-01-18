#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet, then the uppercase alphabet
 * followed by a newline
 * Return: returns 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
