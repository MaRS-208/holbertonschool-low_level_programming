#include <stdio.h>

/**
  * main - base 16
  * Return: 0
  */
int main(void)
{
	int sd;

	for (sd = '0' ; sd <= '9' ; sd++)
	{
		putchar(sd);
	}
	for (sd = 'a' ; sd <= 'f' ; sd++)
	{
		putchar(sd);
	}
	putchar('\n');

	return (0);
}
