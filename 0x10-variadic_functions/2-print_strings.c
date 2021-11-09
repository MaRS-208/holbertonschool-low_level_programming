#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between nums
 * @n: amount of args
 * Return: result
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *x;
	unsigned int y;

	va_start(ap, n);
	x = va_arg(ap, char *);
	for (y = 0; y < n; y++, x = va_arg(ap, char *))
	{
		if (x)
			printf("%s", x);
		else
			printf("(nil)");
		if (((y + 1) < n) && separator)
			printf("%s", separator);

	}
	va_end(ap);
	printf("\n");
}
