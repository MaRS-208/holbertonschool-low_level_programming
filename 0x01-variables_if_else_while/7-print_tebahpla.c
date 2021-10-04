#include <stdio.h>

/**
  * main - alphabet in lowercase backwards
  * Return: 0
  */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch <= 'a' ; ch--)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
