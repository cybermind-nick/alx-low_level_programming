#include "main.h"

/**
 * print_diagonal - print diagonals using '\'
 * @n: number of diagonals to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		int j;

		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
