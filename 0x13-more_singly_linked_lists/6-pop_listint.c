#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int a;

	if (!(*head))
		return (0);
	a = (*head)->n;
	new = *head;
	(*head) = (*head)->next;
	free(new);
	return (a);
}
