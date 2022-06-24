#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point
 * Description: add all numbers passed as cli args (to infintity)
 *
 * @argc: argument count
 * @argv: argument value
 *
 * Return: (0) Success, or (1) failure
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		int sum = 0, val;
		int i;

		for (i = 1; i < argc; i++)
		{
			val = atoi(argv[i]);
			if (val == 0)
			{
				printf("Error\n");

				return (1);
			}
			sum += val;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
