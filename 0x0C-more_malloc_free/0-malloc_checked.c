#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 * @b: number
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	if (b >= INT_MAX)
		exit(98);
	a = malloc(b);
	if (!a)
		exit(98);
	return (a);
}
