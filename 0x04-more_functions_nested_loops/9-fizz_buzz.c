#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
			if (a % 3 == 0)
			{
				printf("Fizz");
				printf(" ");
			}
			else
				if (a % 5 == 0)
				{
					printf("Buzz");
					if (a != 100)
						printf(" ");
					else
						printf("\n");
				}
				else
				{
					printf("%d", a);
					printf(" ");
				}

	}
	return (0);
}
