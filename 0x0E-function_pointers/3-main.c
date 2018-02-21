#include "3-calc.h"

/**
 * main - performs simple operations on two numbers
 * @argc: amount of arguments
 * @argv: array of arguments
 *
 * Return: returns the result of the operation
 */

int main(int argc, char **argv)
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	op = get_op_func(argv[2]);
	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
