#include <stdio.h>

/**
 * main - program entry point
 * Description: prints the name of the program to STDOUT
 * argc: argument counter
 * argv: argument value
 *
 * Return: (0) Success
 */

int main(int argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
