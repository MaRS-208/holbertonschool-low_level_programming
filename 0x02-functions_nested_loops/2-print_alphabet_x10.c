#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet 10 times
 * Return: on success alphabet x 10
 */
void print_alphabet_x10(void)
{
	char pa;
	int x10;

	for (x10 = 0 ; x10 <= 10 ; x10++)
	{
		for (pa = 'a' ; pa <= 'z' ; pa++)
	{
		_putchar(pa);
	}
		_putchar('\n');
	}
}
