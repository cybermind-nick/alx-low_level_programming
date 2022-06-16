#include "main.h"

/**
 * cap_string - capitalize strings
 * @s: string to be capitalize
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i - 1] == '.')
		{
			if ((s[i] == '\n' || s[i] == ' ') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] -= 32;
			else if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
