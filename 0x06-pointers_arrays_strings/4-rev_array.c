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
	int i = 0;
	int temp = 0;
	int len = n - 1;

	while (i != (len - i))
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;

		i++;
	}
}
