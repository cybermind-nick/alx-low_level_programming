#include "main.h"

/**
 * more_numbers - print up to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int row;

	for (row = 1; row <= 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) > 0)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
	}
	_putchar('\n');
}
