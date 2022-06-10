#include "main.h"

/**
 * print_diagonal - print diagonals using '\'
 * @n: number of diagonals to print
 * Return: void
 */

void print_diagonal(int n)
{
	int line, space;

	for (line = 1; line <= n; line++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}

		for (space = 1; space <= i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
