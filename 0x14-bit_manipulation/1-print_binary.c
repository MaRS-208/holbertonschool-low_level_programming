#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int aux;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		aux = n >> i;
		if (aux & 1)
		{
			if (!flag)
				flag = 1;
			_putchar('1');
		}
		else if (flag)
			_putchar('0');
	}
}
