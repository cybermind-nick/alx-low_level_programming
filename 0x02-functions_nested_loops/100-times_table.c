#include "main.h"

/**
 * print_times_table - prints nxn times table
 * @n: the table limit
 * Return: void
 */

void print_times_table(int n)
{
	int row, col;

	for (row = 0; row <= n; row++)
	{
		if (n < 0 || n > 15)
			break;
		for (col = 0; col <= n; col++)
		{
			int result = row * col;

			if (result == 0)
				_putchar('0');

			_putchar(',');
			_putchar(' ');

			else if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
