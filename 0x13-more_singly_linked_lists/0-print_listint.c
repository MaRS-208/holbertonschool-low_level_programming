#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	else
		return (0);
}
