#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out = NULL;
	unsigned int i = 0, j = 0;

	if (s1)
		for (i = 0; s1[i]; i++)
			;
	if (s2)
		for (j = 0; s2[j] && j < n; j++)
			;
	out = malloc(i + j + 1);
	if (!out)
		return (NULL);
	if (s1)
		for (i = 0; s1[i]; i++)
			out[i] = s1[i];
	if (s2)
		for (j = 0; s2[j] && j < n; j++)
			out[i + j] = s2[j];
	out[i + j] = 0;
	return (out);
}
