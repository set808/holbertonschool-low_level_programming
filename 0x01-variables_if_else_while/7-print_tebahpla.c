#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse  followed by a newline
 * Return: returns 0
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
