#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - checks if a string is numerical
 * @s: string
 *
 * Return: int (1) true, (0) false
 */

int is_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))

			return (0);
	}

	return (1);
}

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
			if (is_num(argv[i]))
			{
				val = atoi(argv[i]);
				sum += val;
			}
			else
			{
				printf("Error\n");

				return (1);
			}
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
