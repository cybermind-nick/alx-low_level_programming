#include "main.h"

/**
 * string_toupper - converts all strings to Uppercase
 * @s: string to be operated on
 *
 * Return: str (modified string)
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}

	return (s);
}
