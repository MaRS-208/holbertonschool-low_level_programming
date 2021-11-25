#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *f;

	if (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		free_list(f);
	}
}
