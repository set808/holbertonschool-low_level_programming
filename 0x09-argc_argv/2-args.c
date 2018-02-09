#include <stdio.h>

/**
 * main - prints all arguments that the program receives
 * @argc: number of command line arguments
 * @argv: array of strings representing command line arguments
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", *(argv + x));
	}
	return (0);
}
