#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index
 * @n: nunber
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new;
	unsigned int p = 0;

		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		if (idx == 0)
		{
			new->next = (*head);
			*head = new;
			return (*head);
		}
		while (p < idx - 1)
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				return (NULL);
			p++;
		}
		if (p >= idx)
		{
			free(new);
			return (NULL);
		}
		new->next = tmp->next;
		tmp->next = new;
		return (new);
}
