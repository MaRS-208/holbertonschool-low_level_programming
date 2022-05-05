#include "lists.h"

/**
 * dlistint_len - returns number of elements of list
 * @h: idfc
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h)
	{
		return (dlistint_len(h->next) + 1);
	}
	else
		return (0);
}
