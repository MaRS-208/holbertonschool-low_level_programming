#include <stdio.h>

/**
  * main - single-digit numbers
  * Return: 0
  */
int main(void)
{
	int sd;

	for (sd = '0'; sd <= '9'; sd++)
	{
		putchar(sd);
		if (sd < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
