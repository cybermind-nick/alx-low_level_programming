#include "main.h"

/**
 * print_chessboard - print a caricature chessboard
 * @a: 8x8 two-dimensional array to represent the chess board
 *
 * Return: void
 */

void print_chessboard(int (*a)[8])
{
	int row, column;

	for (row = 0; row < 8 ; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
