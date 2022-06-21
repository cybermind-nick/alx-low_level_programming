#include "main.h"
#define NULL 0

/**
 * _strstr - check for substring in string
 * @haystack: string to search
 * @needle: substring to be searched for
 *
 * Return: Pointer to beginning of substring if there is a match
 * or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, y, x;

	if (needle[0] == '\0')/* check if the needle exist,esle return haystack*/
		return (haystack);

	while (haystack[i] != '\0') /* loop through haystack */
	{
		/* if a byte matches first char of a needle */
		/* loop through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[x] == needle[y])
					x++, y++;
				else
					break;
			} /* if matched throughout, return haystack */

			if (needle[y] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* if no match at all*/
}
