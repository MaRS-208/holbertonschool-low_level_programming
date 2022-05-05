#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: idgaf
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (print_dlistint(h->next) + 1);
	}
	else
		return (0);
}
