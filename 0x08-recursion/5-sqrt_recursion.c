#include "main.h"

/**
 * rec - recursion
 * @n: num
 * @s: square root
 * Return: natural square root
 */
int rec(int n, int s)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (rec(n, s + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (rec(n, 0));
}
