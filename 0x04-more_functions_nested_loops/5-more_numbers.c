#include "main.h"

/**
 * more_numbers - more numbers
 * Return: 0
 */
void more_numbers(void)
{
	int n, d;

	for (d = 0; d <= 9; d++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
