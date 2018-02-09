#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_number - checks if a string only contains digits
 * @s - string to be checked
 *
 * Return: returns 1 if string only contains digits. returns 0 otherwise
 */
int is_number(char *s)
{
	unsigned int x;

	for (x = 0; x < strlen(s); x++)
	{
		if (!isdigit(*(s + x)))
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of strings representing command line arguments
 *
 * Return: always returns 0
 */
int main(int argc, char *argv[])
{
	int x, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (is_number(argv[x]))
			{
				sum += atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
