#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for the index of an int in an array
 * @array: the array to be searched
 * @size: size of array
 * @cmp: function to comapare array elements
 *
 * Return: index of array that passes
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check > 0)
			return (i);
	}

	return (-1);
}
