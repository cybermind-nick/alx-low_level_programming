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

	while (*dest != '\0')
	{
		i++;
		s++;
	}

	while (n >= 0)
	{
		if (*src != 0)
		{
			dest[i] = src[j];
			i++;
			j++;
			n--;
		}
		else
			break
	}

	return (dest);
}
