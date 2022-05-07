#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of list
 * @head: head of list
 * @index: index node, starting from 0
 * Return: nth node of dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curnt;
	unsigned int count = 0;

	curnt = head;

	if (curnt == NULL)
		return (NULL);
	while (curnt != NULL)
	{
		if (count == index)
			return (curnt);
		count++;
		curnt = curnt->next;
	}
	return (curnt);
}
