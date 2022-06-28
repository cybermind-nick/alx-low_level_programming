#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up memory of a number of rows (height)
 * @grid: array to be operated on
 * @height: number of row memory to deallocate
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; grid[i][j] == 0; j++)
			free(grid[i][j]);
		free(grid[i]);
	}
}
