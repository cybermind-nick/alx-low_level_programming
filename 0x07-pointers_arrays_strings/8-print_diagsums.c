#include "main.h"

/**
 * print_diagsums - print sums of diagonals of sqaure matrices
 * @a: the sqaure matrix
 * @n: size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int n)
{
	int row, col;
	int left_diag = 0, right_diag = 0;

	for (row = 0; row < n; row++)
	{
		left_diag += a[row][row]; /* go to row and column value at once */
		right_diag += a[row][n - 1 - row];
	}

	printf("%d, %d\n", left_diag, right_diag);
}
