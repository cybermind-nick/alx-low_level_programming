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

	/* check first index for capital */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	i++;

	while (s[i] != '\0') /* iterate through string */
	{

		/* if lowercase and special char is separator, capitalize*/
		if ((s[i] >= 'a' && s[i] <= 'z')
		    && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
			s[i] -= 32;
		i++;
	}

	return (s);
}
