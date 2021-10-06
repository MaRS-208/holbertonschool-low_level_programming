#include "main.h"

/**
  * print_alphabet - writes the alphabet
  * Return: on success abcdefghijklmnopqrstuvwxyz
  */
void print_alphabet(void)
{
	char pa;
		for (pa = 'a' ; pa <= 'z' ; pa++)
		{
			_putchar(pa);
		}
			_putchar('\n');
}
