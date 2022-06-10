#include "main.h"

/**
 * more_numbers - print up to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
