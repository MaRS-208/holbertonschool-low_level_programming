#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	if (head)
	{
		f = head->next;
		free(head);
		free_listint(f);
	}
}
