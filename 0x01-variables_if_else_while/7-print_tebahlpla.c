#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 97 + 26; n > 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
