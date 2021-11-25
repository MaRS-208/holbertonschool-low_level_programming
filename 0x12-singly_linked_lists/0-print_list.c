#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: string
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	else
		return (0);
}
