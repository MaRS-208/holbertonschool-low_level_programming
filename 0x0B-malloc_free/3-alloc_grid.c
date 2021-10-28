#include "main.h"

/**
 * alloc_grid - allocates a grid of ints
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, l;
	int **pri;
	int *ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	pri = malloc(height * sizeof(int *));
	if (!pri)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pri[i] = malloc(width * sizeof(int));
		if (!pri[i])
		{
			for (i--; i >= 0; i--)
				free(pri[i]);
			free(pri);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		ptr = pri[j];
		for (l = 0; l < width; l++)
			ptr[l] = 0;
	}
	return (pri);
}
