#include "main.h"
#define NULL 0

/**
 * _strpbrk - return first occurence of accept and break
 * @s: string to check
 * @accept: source string
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i]; /* set pointer (the string) to first occurence of target*/
				return (&s[i]);

			}
		}
		i++;
	}

	return (NULL);
}
