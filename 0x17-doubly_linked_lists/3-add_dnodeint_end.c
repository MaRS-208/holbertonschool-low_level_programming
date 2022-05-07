#include "lists.h"

/**
 *add_dnodeint_end - adds new node at end of dlistint_t list
 *@head: head of list
 *@n: number
 *Return: address of new element / NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		 new_node->prev = NULL;
	}
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;

		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}
