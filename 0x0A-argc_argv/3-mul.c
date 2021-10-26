#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: list of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc < 2 && argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	return (0);
}
