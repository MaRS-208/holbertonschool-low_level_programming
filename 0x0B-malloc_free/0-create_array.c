#include "main.h"
/**
 * create_array - creates array
 * @size: array size
 * @c: character
 * Return: a or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (!size)
		return (NULL);
	a = malloc(size);
	if (!a)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
