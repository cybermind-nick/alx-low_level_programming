#include "main.h"

/**
 * _strncpy - copy n bytes of a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes/chars to be copied
 * Return: char * dest - the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i != n)
	{
		if (src[i] == 0)
			break;

		dest[i] = src[i];
		i++;
	}

	return (dest);
}
