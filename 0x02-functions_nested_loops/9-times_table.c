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
				putchar(',');
				putchar(' ');
				if (result < 9)
				{
					putchar(' ');
					putchar('0' + result);
				}
				else
				{
					putchar('0' + (result / 10));
					putchar('0' + (result % 10));
				}
			}
		_putchar('\n');
	}
}
