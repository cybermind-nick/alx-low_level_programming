#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int tmp, start = 0;
	int end = n - 1; /* exclude null terminator */

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++, end--;
	}
}
