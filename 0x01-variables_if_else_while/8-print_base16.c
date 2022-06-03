#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < (48 + 10); n++)
	{
		putchar(n);
	}
	for (n = 97; n < (97 + 5); n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
