#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: the string to operate on
 * Return: int (length of string)
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
