#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int j, sum = 0;
	va_start(para, n);
	for (j = 0; j < n; j++)
		sum += va_arg(para, int);
	va_end(para);
	return (sum);
}
