#include <stdio.h>

/**
 * main - Program entry point
 * Return: Returns 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 97; n < (97 + 26); n++)
	{
		if (n == 101 || n == 113)
		{
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
