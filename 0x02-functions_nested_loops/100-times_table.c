#include "main.h"
#include <stdio.h>
/**
 * print_int - prints number
 * @n: number
 * Return: n
 */
int print_int(long int n)
{
	int b;

	if (n < 0)
	{
		_putchar('-');
		return (1 + print_int(n * -1));
	}
	if (n < 10)
	{
		_putchar(n + '0');
		return (1);
	}
	b = (1 + print_int(n / 10));
	_putchar((n % 10) + '0');
	return (b);
}
/**
 * print_times_table - prints times tables
 * @n: num
 */
void print_times_table(int n)
{
	int c, s, z;

	if (n < 0 || n > 15)
		return;
	for (c = 0; c <= n; c++)
	{
		for (s = 0; s <= n; s++)
		{
			z = c * s;
			if (s != 0)
			{
				if (z < 100)
					_putchar(' ');
				if (z < 10)
					_putchar(' ');
			}
			print_int(z);
			if (s != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
