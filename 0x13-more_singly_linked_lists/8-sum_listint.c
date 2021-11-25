#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int a = 0;

	if (!head)
		return (0);
	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
