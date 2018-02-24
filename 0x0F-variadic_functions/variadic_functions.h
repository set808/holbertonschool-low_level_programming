#ifndef VAR
#define VAR
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct id_func - identifier for a print function
 * @id: character used to identify correct function
 * @f: corresponding function
 *
 */
typedef struct id_func
{
	char *id;
	void (*f)(va_list);
} print_id;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR */
