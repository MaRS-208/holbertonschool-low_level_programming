#include <stdio.h>

/**
  * main - alphabet in lowercase -q&e
  * Return: 0
  */
int main(void)
{
	char ac;

	for (ac = 'a' ; ac <= 'z' ; ac++)
	{
		if (ac != 'e' && ac != 'q')
		putchar(ac);
	}
	{
		putchar('\n');
	}
	return (0);
}
