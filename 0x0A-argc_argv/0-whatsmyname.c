#include <stdio.h>

/**
 * main - program entry point
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
