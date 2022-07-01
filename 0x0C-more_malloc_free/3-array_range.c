#include "main.h"
#include <stdlib.h>

/**
 * array_range - works like range with min and max
 * @min: start (included)
 * @max: end (included)
 *
 * Return: (int *) array
 */

int *array_range(int min, int max)
{
	int *range;
	int i = 0, i_min;

	if (min > max)
		return (NULL);

	i_min = min;

	range = (int *)(malloc(sizeof(int) * (max - min)));

	if (range == NULL)
		return (NULL);

	while (i_min <= max)
	{
		range[i] = i_min;
		i++;
		i_min++;
	}

	return (range);
}
