#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);

	if (*(s + 1) != '\0')
		count += _strlen_recursion(s + 1);
	return (count);
}

/**
 * check_pal - recursively checks characters against each other
 * @s: string to check
 * @length: length of string
 *
 * Return: returns 1 if palindrome. returns 0 otherwise.
 */

int check_pal(char *s, int length)
{
	if (*s != *(s + length))
		return (0);
	if (*(s + length) == '\0')
		return (1);
	return (check_pal(++s, length - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: returns 1 if string is a palindrome. returns 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s) - 1;

	return (check_pal(s, length));
}
