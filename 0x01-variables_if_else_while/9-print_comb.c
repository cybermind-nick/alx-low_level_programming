#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 48 + 10; n++)
	{
		putchar(n);
		if (n != 48 + 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
