#include "holberton.h"

/**
 * check_prime - check if a number is prime
 * @number: number to check
 * @divisor: divisor to use
 *
 * Return: returns the root of a square
 */

int check_prime(int number, int divisor)
{
	if (divisor == number)
		return (1);
	else if (number % divisor == 0)
		return (0);

	return (check_prime(number, ++divisor));
}

/**
 * is_prime_number - checks if a number is prime recursively
 * @n: number to check
 *
 * Return: returns 1 if number is prime. returns 0 otherwise
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);
	else
		return (check_prime(n, divisor));
}
