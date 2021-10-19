#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer
 * @c: character
 * Return: &s[l]
 */
char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] && s[l] != c; l++)
	{
		if (s[l])
			return (&s[l]);
	}
		return (0);
}
