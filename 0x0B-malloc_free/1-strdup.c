#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *c;
	int a;

	if (!str)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
	c = malloc(a * sizeof(char));
	if (!a)
		return (NULL);
	for (a = 0; str[a]; a++)
		c[a] = str[a];
	return (c);
}
