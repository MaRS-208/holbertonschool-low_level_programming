#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: old pointer
 * @old_size: number
 * @new_size: number
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int s;
	char *r;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		newptr = malloc(new_size);

		for (s = 0; ptr[s]; s++)
	}
	if (!ptr)
		newptr = malloc(new_size);
}
