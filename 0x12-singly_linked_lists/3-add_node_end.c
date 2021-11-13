#include "lists.h"

/**
 *create_node - a
 *@str: a
 *Return: nothing
 */
list_t *create_node(const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = NULL;
	if (str)
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	return (new);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	if (!head)
		return (NULL);
	new = create_node(str);
	if (!new)
		return (NULL);
	new->next = NULL;
	tmp = *head;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;
	return (new);
}
