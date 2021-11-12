#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: string
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	return (list_len(h->next) + 1);
}
