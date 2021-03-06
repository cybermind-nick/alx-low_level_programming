#include "main.h"

/**
 * _pow_recursion - return the power of an int to the given index
 * @x: base
 * @y: index
 *
 * Return: int (the value of the power)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
