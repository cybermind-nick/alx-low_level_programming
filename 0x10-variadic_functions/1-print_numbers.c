#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print a varible list of numbers entered
 * @seperator: string to be printed after each number
 * @n: number of numbers (args)
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return;

	va_list args;

	va_start(args, n);

	if (seperator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d\n", va_arg(args, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d\n", va_arg(args, int));
			printf("%s\n", seperator);
		}
	}
}
