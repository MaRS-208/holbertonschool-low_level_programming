#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int c, s, z;

	for (c = 0; c <= 9; c++)
	{
		for (s = 0; s <= 9; s++)
		{
			z = c * s;
			if (z <= 9 && s != 0)
				_putchar(' ');
			if (z < 10)
				_putchar(z + '0');
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (s != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
