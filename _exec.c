#include "main.h"
/**
 * _exec - Entrance to the code
 *
 * @argv : character
 *
 * Return: Always 0 (Success)
 */

int _exec(char **argv)
{
	/*confirm that argv isn't empty*/
	char *command = NULL;

	if (argv)
	{
		/* get the command */
		command = argv[0];
		/* generate the path to this command before passing it to execve */
		/*actual_command = get_location(command);*/

		/* execute the command with execve */
		if (execve(command, argv, NULL) == -1)
		{
			perror("Error:");
		}
		return (0);
	}
}
