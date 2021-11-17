#include <stdlib.h>
#include "lists.h"
/**
 * funcrev - function to rev
 * @back: previous node
 * @head: pointer to first node
 * Return: head of the list
 */
listint_t *funcrev(listint_t *back, listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return (back);
	tmp = head->next;
	head->next = back;
	return (funcrev(head, tmp));
}




/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	*head = funcrev(NULL, *head);
	return (*head);
}
