#include "main.h"

/**
 * _memset - set bytes if a string in memory
 * ...to a constant byte
 * @s: string in memory
 * @b: byte contant
 * @n: number of bytes in 's' to fill with the constant
 * Return: char *s - filled up string memory
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n;/* accept positive size only */
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
