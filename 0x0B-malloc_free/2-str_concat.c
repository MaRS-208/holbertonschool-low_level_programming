#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	char *out = NULL;
	int i, j;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	out = malloc(i + j + 1);
	for (i = 0; s1[i]; i++)
		out[i] = s1[i];
	for (j = 0; s2[j]; j++)
		out[i + j] = s2[j];
	out[i + j] = 0;
	return (out);
}
