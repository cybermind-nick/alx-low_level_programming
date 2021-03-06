#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of characters and fills it up
 * @size: size of the array
 * @c: character to fill up array with
 *
 * Return: NULL if size == 0 or create fails, else: return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *c_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	c_arr = (char *)(malloc(sizeof(char) * size));

	if (c_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		c_arr[i] = c;
	}

	return (c_arr);
}
