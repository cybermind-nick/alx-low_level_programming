#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point
 * Description: multiply all input argument integers
 * @argc: argument count
 * @argv: argument values
 *
 * Return: (0) Success or (1) failure
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
