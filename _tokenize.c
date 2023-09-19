#include "main.h"
/**
 * _tokenize- Entrance to the code
 *
 * @buffer : character
 *
 * @num : character
 *
 * Return: Always 0 (Success)
 */

int _tokenize(char **buffer, ssize_t *num)
{
	char *buff = NULL, *token, *delimit = " \n", **argv;
	int t = 0, i = 0;

	buff = malloc(sizeof(char) * *num);
	if (buff == NULL)
	{
		perror("Memmory allocation failed !");
		return (-1);
	}
	strcpy(buff, *buffer);
	token = strtok(*buffer, delimit);

	while (token != NULL)
	{
		t++;
		token = strtok(NULL, delimit);
	}
	argv = malloc(sizeof(char *) * t);
	token = strtok(buff, delimit);
	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char *) * strlen(token));
		strcpy(argv[i], token);
		token = strtok(NULL, delimit);
	}
	argv[i] = NULL;
	_pid(argv);
	return (0);
}
