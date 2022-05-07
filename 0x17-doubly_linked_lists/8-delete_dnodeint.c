#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index index of list
 * @head: start of list
 * @index: index of node to be  deleted, it starts at 0
 * Return: 1 if success / -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *current_node, *next_node, *prev_node;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
			*head = NULL;
		free(current_node);
		return (1);
	}
	while (i < index)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
		i++;
	}
	if (current_node->next == NULL)
	{
		current_node->prev->next = NULL;
		free(current_node);
		return (1);
	}
	next_node = current_node->next;
	prev_node = current_node->prev;
	prev_node->next = next_node;
	next_node->prev = prev_node;
	free(current_node);
	return (1);
}
