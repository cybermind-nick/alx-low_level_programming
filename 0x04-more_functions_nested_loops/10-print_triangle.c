#include <stdio.h>

/**
 * print_triangle - Print a right angle triangle
 * @size: size of the triangke
 * Return: void
 */

void print_triangle(int size)
{
	int pound, space, pp;

	if (size > 0)
	{
		for (pound = 1; pound <= size; pound++)
		{
			space = size - pound;
			pp = pound
			while (space < size)
			{
				_putchar(' ');
				space++;
			}
			while (pp > 0)
			{
				_putchar('#');
				pp++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
