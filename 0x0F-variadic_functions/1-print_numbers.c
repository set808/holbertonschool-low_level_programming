#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a newline
 * @separator: string printed between numbers
 * @n: number f arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("%c", '\n');
	va_end(args);
}
