#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cn = 0;
	int s, len;

	if (!b)
		return (0);
	for (s = 0; b[s]; s++)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
	}
	len = s - 1;
	for (s = len; s >= 0; s--)
		if (b[s] == '1')
			cn += 1 << (len - s);
	return (cn);
}
