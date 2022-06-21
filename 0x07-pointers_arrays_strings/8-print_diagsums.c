#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals of sqaure matrices
 * @a: the sqaure matrix
 * @n: size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row;
	int left_diag = 0, right_diag = 0;

	for (row = 0; row < size; row++)
	{
		a = a+row;
		left_diag += a[row]; /* go to row and column value at once - from the left  */
		right_diag += a[size - 1 - row]; /* from the right inwards */
	}

	printf("%d, %d\n", left_diag, right_diag);
}
