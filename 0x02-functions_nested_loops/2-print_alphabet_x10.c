#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet 10 times
 * Return: on success alphabet x 10
 */
void print_alphabet_x10(void)
{
	char pa;
	int filas;

	for (filas = 0 ; filas < 10 ; filas++)
	{
		for (pa = 'a' ; pa <= 'z' ; pa++)
	{
		_putchar(pa);
	}
		_putchar('\n');
	}
}
