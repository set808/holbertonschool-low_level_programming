#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a newline
 * @separator: string printed between strings
 * @n: number f arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (seperator != NULL && (i + 1) != n)
			printf("%s", seperator);
	}
	printf("%c", '\n');
	va_end(args);
}
