#include "3-calc.h"

/**
 * op_add - add
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - add
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - add
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - add
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
