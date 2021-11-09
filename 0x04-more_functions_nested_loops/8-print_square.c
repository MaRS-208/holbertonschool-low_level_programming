#include "main.h"

/**
 * print_square - prints square
 * @size: size
 * Return: 0
 */
void print_square(int size)
{
	int b, v;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (b = 1; b <= size; b++)
		{
			for (v =  1; v <= size; v++)
			_putchar('#');
			_putchar('\n');
		}
}
