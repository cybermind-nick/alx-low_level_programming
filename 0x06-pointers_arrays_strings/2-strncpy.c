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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n) /* filling up any leftover spaces in the buffer */
	{
		dest[i] = '\0';
	}

	return (dest);
}
