#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1
 * @c: int variable
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
