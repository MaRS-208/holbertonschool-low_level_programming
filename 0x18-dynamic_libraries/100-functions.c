#include "main.h"
#include <stdio.h>

/**
 * add - adds two integers
 * @a: first int
 * @b: second int
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subs two integers
 * @a: first int
 * @b: second int
 * Return: sub
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: mult
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two integers
 * @a: first int
 * @b: second int
 * Return: div
 */
extern div_t div (int __numer, int __denom)
{
	div_t out = {0, __numer / __denom};
	return (out);
}
/**
 * mod - module of two integers
 * @a: first int
 * @b: second int
 * Return: mod
 */
int mod(int a, int b)
{
	return (a % b);
}
