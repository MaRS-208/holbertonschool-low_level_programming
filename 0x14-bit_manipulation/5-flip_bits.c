#include "main.h"
/**
 * flip_bits - return num of bits you need to flip to get from one num to other
 * @n: num 1
 * @m: num 2
 * Return: num of bits you would need to flip to get from one num to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s;
	unsigned int c = 0;
	unsigned long int aux_n, aux_m;

	for (s = 63; s >= 0; s--)
	{
		aux_n = n >> s;
		aux_m = m >> s;
		c += 1 & (aux_m ^ aux_n);
	}
	return (c);
}
