#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the lowercase alphabet followed by a newline
 * Return: returns 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
