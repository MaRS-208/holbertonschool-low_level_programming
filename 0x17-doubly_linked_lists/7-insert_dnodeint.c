#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: pointer
 * @idx: index of list where new node is added, it starts at 0
 * @n: number
 * Return: next_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node, *next_node;

	current_node = *h;
	next_node = malloc(sizeof(dlistint_t));

	if (!h || !next_node)
		return (NULL);

	next_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx > 1)
	{
		current_node = current_node->next;
		idx--;
		if (current_node == NULL)
		{
			free(next_node);
			return (NULL);
		}
		if (current_node->next == NULL)
		{
			free(next_node);
			return (add_dnodeint_end(h, n));
		}
	}
	next_node->next = current_node->next;
	next_node->prev = current_node;
	current_node->next->prev = next_node;
	current_node->next = next_node;
	return (next_node);
}
