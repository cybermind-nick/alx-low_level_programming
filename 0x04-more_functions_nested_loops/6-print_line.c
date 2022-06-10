#include "main.h"

/**
 * print_line - print underscore n times
 * @n: number of lines to print
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
