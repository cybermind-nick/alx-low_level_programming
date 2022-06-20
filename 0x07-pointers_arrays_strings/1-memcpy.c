#include "main.h"

/**
 * _memcpy - copy one string to another from memory
 * @dest: location to be copied to
 * @src: location to be copied from
 * @n: number of bytes to be copied
 *
 * Return: char *dest - copied string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int bytes = n;
	int i;

	if (bytes > 0)
	{
		for (i = 0; i < bytes; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
