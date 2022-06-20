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
	int i;

	for (i = 0; *(s + i) != '\0' || i > n; i++)
	{
		*(s + i) = b;
	}
}
