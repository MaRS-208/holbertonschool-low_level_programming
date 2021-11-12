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
		new->str = strdup(str);
	return (new);
}

/**
 * add_node - a
 * @head: a
 * @str: a
 * Return: a
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);
	new = create_node(str);
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	return (new);
}
