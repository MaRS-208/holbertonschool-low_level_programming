#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number
 * @size: bytes
 * Return: a
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int c;

	if (!nmemb || !size)
		return (NULL);
	b = malloc(nmemb * size);
	if (!b)
		return (NULL);
	for (c = 0; c < (nmemb * size); c++)
		b[c] = 0;
	a = b;
	return (a);
}
