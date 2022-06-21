#include "main.h"

/**
 * print_chessboard - print a caricature chessboard
 * @a: 8x8 two-dimensional array to represent the chess board
 *
 * Return: void
 */

void print_chessboard(int (*a)[8])
{
	int i = 0, j;

	while (*(a + i) != 0)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((a + i)[j]);
		}
		_putchar('\n');
		i++;
	}
}
