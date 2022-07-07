#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print a varible list of numbers entered
 * @separator: string to be printed after each number
 * @n: number of numbers (args)
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i != n && separator != NULL)/*delimiter excluded after last arg*/
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
