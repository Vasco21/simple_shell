#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("son %u\n", my_pid);
	my_pid = getppid();
	printf("father %u\n", my_pid);
	return (0);
}
