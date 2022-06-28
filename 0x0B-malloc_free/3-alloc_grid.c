#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to a 2-dim array
 * @width - columns - inner array
 * @heigth: rows - outer (master) array
 *
 * Return: 2-dim int array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **)(malloc(sizeof(int) * height));
	*arr = (int *)(malloc(sizeof(int) * width));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
