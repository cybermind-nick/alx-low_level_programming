#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: array (as pointer)
 * @n: int - size of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
		printf("%d", *a);

	for (i = 1; i < n; i++)
	{
		printf(", ");
		printf("%d", *(a + i));
	}
	printf("\n");
}
