#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	char i;
	int counter;

	for (counter = 1; counter <= 10; counter++)/* to print 10 times*/
	{
		for (i = 0; i <= 14; i++)/* to print from 0-14*/
		{
			if (i / 10 > 0)/* to get the first digit and check if > 0*/
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');/* to get the last digit*/
		}
		_putchar('\n');
	}

}
