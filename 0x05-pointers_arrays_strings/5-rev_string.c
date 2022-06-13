#include "main.h"

/**
 * rev_string - reverse a string itself (modify, not print)
 * @s: the string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	char *temp;
	int len = 0;

	while (*s = '\0')
	{
		len++;
		++s;
	}

	while (len > 0)
	{
		temp += *s;
		len--;
		s--;
	}

	s = temp;
}
