#include "search_algos.h"

/**
* binary_search - search for value in array using the Binary search algorithm
* @array: pointer to first element of array
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0, left = 0, mid = 0, right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			if (idx != right)
				printf("%d, ", array[idx]);
			else
				printf("%d\n", array[idx]);
		}
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
