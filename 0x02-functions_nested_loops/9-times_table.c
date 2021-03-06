#include "main.h"

/**
 * times_table - print 9x9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int result = row * col;

			if (col == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
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
		}
	_putchar('\n');
	}
}
