#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && size && action)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
