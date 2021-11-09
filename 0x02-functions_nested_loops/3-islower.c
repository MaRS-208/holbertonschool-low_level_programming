#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: on success alphabet x 10
 * @c: int variable
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
