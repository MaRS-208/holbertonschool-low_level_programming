#include "main.h"

/**
 * *_strcat - strcat
 * @dest: dest
 * @src: src
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	for (d = 0; dest[d]; d++)
	{
		continue;
	}
	for (s = 0; src[s]; s++)
		dest[d + s] = 0;
	return (dest);
}
