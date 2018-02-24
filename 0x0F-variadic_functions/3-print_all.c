#include "variadic_functions.h"
#include <stdio.h>
/**
 * _printchar - prints a char
 * @list: list to print from
 *
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printint - prints an int
 * @list: list to print from
 *
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * _printfloat - prints a float
 * @list: list to print from
 *
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printstring - prints a string
 * @list: list to print from
 *
 */
void _printstring(va_list list)
{
	char *ptr = va_arg(list, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * print_all - prints anything
 * @format: list of all types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	print_id ids[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL}
	};
	va_list args;
	int i, j;
	char *blank, *sep;

	va_start(args, format);
	i = 0;
	blank = "";
	sep = ", ";

	while (format && format[i])
	{
		j = 0;
		while (ids[j].id)
		{
			if (format[i] == *ids[j].id)
			{
				printf("%s", blank);
				ids[j].f(args);
				blank = sep;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
