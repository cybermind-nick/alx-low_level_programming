#include "main.h"

/**
 * string_toupper - converts all strings to Uppercase
 * @s: string to be operated on
 *
 * Return: str (modified string)
 */

char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}

	return (s);
}
