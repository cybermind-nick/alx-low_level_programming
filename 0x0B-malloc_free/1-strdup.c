#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to an allocated address with a copy of the string
 * @str: string to write to allocate memory address
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *str_ptr;
	int size = 0;
	int i;

	/* check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Get the size of the string */
	while (str[size] != '\0')
		size++;

	/* allocate memory */

	str_ptr = (char *)(malloc(sizeof(char) * size));

	if (str_ptr == NULL)
		return (NULL);

	/* iterate over the new memory and copy the string */
	for (i = 0; i <= size; i++)
		str_ptr[i] = str[i];

	return (str_ptr);
}
