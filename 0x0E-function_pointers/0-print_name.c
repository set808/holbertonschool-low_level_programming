#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name using function pointers
 * @name: name to be printed
 * @f: function used to print name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
