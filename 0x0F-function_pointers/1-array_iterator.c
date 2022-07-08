#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - perform a custom function on every array element
 * @array: the array to print
 * @size: the size of the array
 * @action: the action to perform on the array elements
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
