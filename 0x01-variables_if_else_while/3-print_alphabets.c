#include <stdio.h>

/**
  * main - alphabet in lower-uper-case
  * Return: 0
  */
int main(void)
{
	char az;
	char AZ;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	{
		putchar('\n');
	}
	return (0);
}
