#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + 1) != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
