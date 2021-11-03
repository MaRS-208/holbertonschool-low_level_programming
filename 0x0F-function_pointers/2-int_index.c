#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: pointer
 * @size: number
 * @cmp: pointer to cuntion
 * Return: c or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0 || cmp == 0 || array == 0)
		return (-1);
	for (c = 0; c < size; c++)
	{
		cmp(array[c]);
		if (cmp(array[c]))
			return (c);
	}
	return (-1);
}
