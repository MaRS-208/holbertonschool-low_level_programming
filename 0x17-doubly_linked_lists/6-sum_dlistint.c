#include "lists.h"

/**
 *sum_dlistint - returns sum of all data (n) of linked list
 *@head: start of list
 *Return: sum all data (n) of a listint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
