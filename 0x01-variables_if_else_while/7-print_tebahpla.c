#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 96 + 26; n > 96; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
