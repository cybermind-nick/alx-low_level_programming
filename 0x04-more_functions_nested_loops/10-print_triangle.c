#include <stdio.h>

/**
 * print_triangle - Print a right angle triangle
 * @size: size of the triangke
 * Return: void
 */

void print_triangle(int size)
{
	int pound, space, hash;

	if (size > 0)
	{
		for (pound = 1; pound <= size; pound++)
		{
			for (space = 1; space < (size - height); space++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= pound; hash++)
				putchar('#');
		}
	}
	else
		_putchar('\n');

}
