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

			if (col == 0)
			{
				_putchar('0');
				continue;
			}

			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				put_unit(result);
			}
			else if (result >= 10 && result < 100)
			{
				put_tens(result);
			}
			else
			{
				put_hundred(result);
			}
		}
		_putchar('\n');
	}
}

/**
 * put_unit - prints out the unit digit
 * @result: number to be printed
 * Return: void
 */

void put_unit(int result)
{
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + result);
}

/**
 * put_tens - print out the tens digit
 * @result: number to be printed
 * Return: void
 */

void put_tens(int result)
{
	_putchar(' ');
	_putchar('0' + (result / 10));
	_putchar('0' + (result % 10));
}

/**
 * put_hundred - print out the hundredth digits
 * @result: number to be printed
 * Return: void
 */

void put_hundred(int result)
{
	int h = (result / 100); /* get first digit */
	int t = (result / 10) - (h * 10); /* get second digit */

	_putchar('0' + h);
	_putchar('0' + t);
	_putchar('0' + (result % 10)); /* Last digit */
}
