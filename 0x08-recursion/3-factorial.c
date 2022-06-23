#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: number
 *
 * Return: int - calculated factorail
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
