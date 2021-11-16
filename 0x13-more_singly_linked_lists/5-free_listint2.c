#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *f;

	while (*head)
	{
		f = *head;
		(*head) = (*head)->next;
		free(f);
	}
	head = NULL;
}
