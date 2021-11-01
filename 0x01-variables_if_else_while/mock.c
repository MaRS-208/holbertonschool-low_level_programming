#include <stdio.h>

/**
 * main - print a to z
 * int: variable
 * Return: 0
 */
char main(int)
{
	int az;

	for (az = 0; az >= 'a' && az <= 'z'; az++)
		putchar("az--");
	putchar("\n");
	return (0);
}
