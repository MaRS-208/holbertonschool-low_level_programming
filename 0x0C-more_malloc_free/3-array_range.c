#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: a
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (!a)
		return (NULL);
	for (i = min; i <= max; i++)
		a[i - min] = i;
	return (a);
}
