#include "main.h"
/**
 * _pid - Entrance to the code
 *
 * @argv : character
 *
 * Return: Always 0 (Success)
 */

void _pid(char **argv)
{
	pid_t pid, ppid;

	pid = fork();

	int exec = 0;

	ppid = getpid();

	if (pid == -1)
	{
		perror("Failed");
	}
	if (pid == 0)
	{
		/*child process*/
		sleep(0);
		exec = _exec(argv);
		/*printf("I'am the child !\n");*/
	}
	else
	{
		/*Parent process*/
		wait(NULL);
		/*printf("I'am the parent: %d\n", ppid);*/
	}
}
