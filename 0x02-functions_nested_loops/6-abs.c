#include "main.h"

/**
 * _abs - definition of the _abs() function in main.h
 * Description: computes the absolute value of a number
 * @n: integer input
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}
