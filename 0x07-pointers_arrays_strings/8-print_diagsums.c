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

	int diagonal_1 = 0;
	int diagonal_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_2 += a[i];
	}

	printf("%d, %d\n", diagonal_1, diagonal_2);

}
