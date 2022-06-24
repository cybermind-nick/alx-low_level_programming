#include "main.h"

/**
 * find_factor - searches for a factor of n
 * @n: number to check
 * @factor: int
 *
 * Return: 1 if a factor is found, else 0
 */

int find_factor(int n, int factor)
{
	if (factor > (n / 2))
		return (1); /* no factor found - it's a prime */

	if (n % factor == 0)
		return (0); /* factor was found - not prime */

	return (find_factor(n, factor + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: interger to check
 *
 * Return: 1 if prime, else return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (find_factor(n, 2));
}
