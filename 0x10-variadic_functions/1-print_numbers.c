#include "variadic_functions.h"
/**
 * print_numbers - prins the argyments
 * @separator: separator between nums
 * @n: amount of args
 * Return: result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int x;
	unsigned int y;

	va_start(ap, n);
	x = n;
	x = va_arg(ap, int);
	for (y = 0; y < n; y++, x = va_arg(ap, int))
	{
		printf("%d", x);
		if (((y + 1) < n) && separator)
			printf("%s", separator);

	}
	va_end(ap);
	printf("\n");
}
