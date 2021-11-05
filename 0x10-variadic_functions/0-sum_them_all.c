#include "variadic_functions.h"
/**
 * sum_them_all - sums the argyments
 * @n: amount of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int out = 0;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		out += va_arg(ap, int);
	va_end(ap);
	return (out);
}
