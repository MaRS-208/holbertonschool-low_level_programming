#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			printf("argv[%d] = %s\n", a, argv[a]);
		}
	}
	else
	{
	}
	return (0);
}
