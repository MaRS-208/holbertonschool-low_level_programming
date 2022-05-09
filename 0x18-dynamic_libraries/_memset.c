#include "main.h"

/**
 * _memset - sets the memory
 * @s: pointer
 * @b: constant
 * @n: bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
		s[f] = b;
	return (s);
}
