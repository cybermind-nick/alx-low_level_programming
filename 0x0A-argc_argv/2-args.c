#include <stdio.h>

/**
 * main - Program entry point
 * Description: Print out all receive cli arguments
 * @argc: argument count
 * @argv: argument values
 *
 * Return: (0) Success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
