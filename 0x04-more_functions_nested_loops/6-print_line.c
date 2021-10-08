#include "main.h"

/**
 * print_line - prints line
 * @n: number
 * Return: _
 */
void print_line(int n)
{
	int s;

	if (n > 0)
	{
		for (s = 1; s <= n; s++)
		{
			_putchar('_');
		}
		_putchar ('\n');
	}
	else
		_putchar('\n');

}
