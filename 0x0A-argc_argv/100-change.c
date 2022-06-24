#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Description: The minimum coin change problem
 *  Exactly on cli argument is produced (+int)
 *
 * @argc: argument count
 * @argv: argument value (strictly 1)
 *
 * Return: (0) Success, (1) Failure
 */

int main(int argc, char **argv)
{
	int val, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	/* convert string to int and calculate coins */
	val = atoi(argv[1]);

	coins += val / 25;
	val = val % 25;
	coins += val / 10;
	val = val % 10;
	coins += val / 5;
	val = val % 5;
	coins += val / 2;
	val = val % 2;
	coins += val / 1;

	printf("%d\n", coins);

	return (0);
}
