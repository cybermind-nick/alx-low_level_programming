#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to allocated memory
 * @b: number of bytes to allocate
 *
 * Return: void pointer to memory, else process termination code 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
