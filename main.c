#include "main.h"

/**
 * main - Entrance to the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (1)
	{
		_prompt();
		num = _read();
		if (num == -1)
		{
			break;
		}
	}
	return (0);
}
