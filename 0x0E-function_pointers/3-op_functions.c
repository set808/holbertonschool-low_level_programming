#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the sum of two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the difference of two integers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the product of two integers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the quotient of two integers.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the remainder of a / b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
