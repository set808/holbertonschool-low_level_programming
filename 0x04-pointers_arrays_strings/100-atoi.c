#include "holberton.h"

/**
 * is_digit - checks if character is a digit.
 * @c: character to be checked
 *
 * Return: returns 1 if digit. Returns 0 if not a digit.
 */

int is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 *
 * Return: returns converted integer
 */

int _atoi(char *s)
{
	int sign = 0;
	unsigned int number = 0;


	while (*s)
	{
		if (*s == '+')
		{
			sign++;
		}
		else if (*s == '-')
		{
			sign--;
		}
		else if (is_digit(*s))
		{
			break;
		}
		s++;
	}

	while (is_digit(*s))
	{
		number *= 10;
		number += *s - '0';
		s++;
	}

	if (sign < 0)
		number *= -1;
	return (number);
}
