#include "main.h"

/**
 * print_binary - print out the binary form of a number
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int rem = n % 2;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar(1 + '0');
		return;
	}

	print_binary(n / 2);
	_putchar(rem + '0');
}
