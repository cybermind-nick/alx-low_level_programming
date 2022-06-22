#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
		_putchar(*s);
		return;
	}

	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}