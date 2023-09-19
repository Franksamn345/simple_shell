#include "main.h"
/**
 * _read - Entrance to te code
 * Return: Always "num" (Success)
 */

int _read(void)
{
	char *buffer = NULL;
	int token = 0;
	size_t size = 0;
	ssize_t num;

	num = getline(&buffer, &size, stdin);

	if (num == -1)
	{
		printf("Exiting my shell...\n");
		return (-1);
	}
	token = _tokenize(&buffer, &num);
	return (num);
}
