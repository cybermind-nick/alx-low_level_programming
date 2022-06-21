#include "main.h"
#define NULL 0

/**
 * _strchr - checks for char 'c' in string 's'
 * @s: string to be checked
 * @c: char to c
 *
 * Return: pointer to char or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)/* find match */
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
