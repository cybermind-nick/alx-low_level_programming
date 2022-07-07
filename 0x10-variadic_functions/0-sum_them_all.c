#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum up all the numbers in the fucntion
 * @n: number of args
 *
 * Return: sum of all integer args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
