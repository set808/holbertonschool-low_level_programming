#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * check_pal - recursively checks characters against each other
 * @string: string to check
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
	int length = _strlen(s) - 1;

	return (check_pal(s, length));
}
