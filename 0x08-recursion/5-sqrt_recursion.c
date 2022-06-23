#include "main.h"

/**
 * find_root - searches for the root of n if it exists
 * @n: root to search for
 * @root: potential roots (increment)
 *
 * Return: int - root (if exits) else -1 or 0
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1)); /* root = 0 is the starting state */
}

/**
 * _sqrt_recursion - calculate the natural root of a number recursively
 * @n: the number to find the natural root of
 *
 * Return - int (root - it exist) or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
