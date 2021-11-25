#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: index of the node
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int new = 0;

	while (head && new != index)
	{
		head = head->next;
		new++;
	}
	if (head)
		return (head);
	else
		return (NULL);
}
