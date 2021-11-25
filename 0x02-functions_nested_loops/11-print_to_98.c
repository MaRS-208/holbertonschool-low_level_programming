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
 * print_to_98 - prints all natural numbers from n to 98
 * @n: num
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		print_int(i);
		_putchar(',');
		_putchar(' ');
	}
	for (i = n; i > 98; i--)
	{
		print_int(i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
