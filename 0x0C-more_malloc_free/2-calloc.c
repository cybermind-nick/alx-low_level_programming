#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: size of the array
 *
 * Return: (void *) pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemd * size; i++)
		*((char *)ptr + i) = 0; /* Typecasting assigned values */

	return (ptr);
}
