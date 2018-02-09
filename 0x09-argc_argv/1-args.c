#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of command line arguments
 * @argv: array of strings representing command line arguments
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int arguments = argc - 1;

	printf("%d\n", arguments);
	(void)argv;
	return (0);
}
