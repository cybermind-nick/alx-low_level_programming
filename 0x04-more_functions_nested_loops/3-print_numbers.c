#include "main.h"

/**
 * print_numbers - print all the digits
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
