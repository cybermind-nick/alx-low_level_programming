#include <stdio.h>

/**
 * main - Program entry point
 * Return: 0 (Success)
 */

int main(void)
{
	for (int n = 97; n < (97 + 26); n++)
	{
		putchar(n);
	}
	putchar(' ');
	return (0);
}
