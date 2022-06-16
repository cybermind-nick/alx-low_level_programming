#include "main.h"

/**
 * _strncat - write n bytes to the copy
 * @dest: - destination - output
 * @src: string to be written from
 * @n: number of bytes to write
 * Return: char* dest after copying
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
