#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * main - prints the PID of the parent process
 * Return: 0
 */
int main(void)
{
	int p_id, p_pid;

	p_id = getpid();
	p_pid = getppid();

	printf("%d\n", p_id);
	printf("%d\n", p_pid);


	return (0);
}
