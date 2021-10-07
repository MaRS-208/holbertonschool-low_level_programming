#include "main.h"

/**
 * print_sign - prints number sign
 * Return: sign
 * @n: int variable
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
	}
	else
		if (n == 0)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar('0');
		}
		else
		{
			_putchar('-');
			_putchar(',');
			_putchar(' ');
			_putchar('-');
			_putchar('1');
		}
	return (n);
}
