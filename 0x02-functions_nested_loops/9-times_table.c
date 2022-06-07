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

			if (result > 9)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar('0' + result);
			}
			_putchar('\t');
		}
		_putchar('\n');
	}
}
