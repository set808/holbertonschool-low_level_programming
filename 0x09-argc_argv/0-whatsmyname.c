#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
