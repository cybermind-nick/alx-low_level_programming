#include "main.h"
#include <stdlib.h>
#define NULL 0

/**
 * create_array - Creates array of characters and fills it up
 * @size: size of the array
 * @c: character to fill up array with
 *
 * Return: NULL if size == 0 or create fails, else: return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;

	char *c_arr = (char *)(malloc(char) * n);

	if (c_arr == NULL)
		return NULL;

	int i;

	for (i = 0; i < n; i++)
	{
		c_arr[i] = c;
	}

	return c_arr
}
