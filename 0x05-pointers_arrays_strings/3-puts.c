#include "main.h"

/**
 * _puts - write an entire string to STDOUT
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
