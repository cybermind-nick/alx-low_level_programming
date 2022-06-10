#include "main.h"

/**
 * print_square - print nxn square
 * @n: size of sqaure to print
 * Return: void
 */

void print_square(int n)
{
	int h, b;

	if (n > 0)
	{
		for (h = 0; h < n; h++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
