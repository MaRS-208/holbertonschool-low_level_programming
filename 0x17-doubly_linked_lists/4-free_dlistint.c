#include "lists.h"

/**
 *free_dlistint - frees dlistint_t list.
 *@head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
