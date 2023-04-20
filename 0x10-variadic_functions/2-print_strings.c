#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *i;
	unsigned int j;
	va_start(string, n);
	for (j = 0; j< n;j++)
	{
		i = va_arg(string, char *);
		if (i == NULL)
			printf("(nil)");
		else
			printf("%s", i);
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
