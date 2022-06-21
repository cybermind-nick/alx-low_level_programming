#include "main.h"
#define NULL 0

/**
 * _strstr - check for substring in string
 * @haystack: string to search
 * @needle: substring to be searched for
 *
 * Return: Pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;
	char *start_ptr;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] = '\0'; j++)
			{
				if (haystack[i+j] != needle[j])
					break;
				else if (haystack[i+j] == needle[j] && needle[j+1] == '\0')
					return (&haystack[i]);
			}
		}
		i++;
	}

	return (NULL);
}
