#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *new;
	unsigned int a = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		(*head) = tmp->next;
		free(tmp);
		return (1);
	}
	while (a < (index - 1))
	{
		tmp = tmp->next;
		if (!tmp)
			return (-1);
		a++;
	}
	new = tmp->next;
	tmp->next = tmp->next->next;
	free(new);
	return (1);
}
