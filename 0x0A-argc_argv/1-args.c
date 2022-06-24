#include <stdio.h>

/**
 * main - program entry point
 * Description: print the number of arguments supplied...
 * ...to main
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	(void)(*argv); /* Handle the unused parameter error by voiding argv */
	if (argc > 0)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);

	return (0);
}
