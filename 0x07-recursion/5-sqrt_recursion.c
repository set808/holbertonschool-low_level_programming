#include "holberton.h"

/**
 * check_floor - find the root of a square recursively
 * @square: square we need to find
 * @floor: root to be checked
 *
 * Return: returns the root of a square
 */

int check_floor(int square, int floor)
{
	if (floor * floor == square)
		return (floor);
	else if (floor * floor < square)
		return (check_floor(square, ++floor));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 *
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int floor = 1;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (check_floor(n, floor));
}
