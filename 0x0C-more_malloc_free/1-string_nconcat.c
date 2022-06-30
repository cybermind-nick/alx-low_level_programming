#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the length of a string
 * @str: string
 *
 * Return: (int) - length of string
 */

int _strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;

	return (count);
}

/**
 * string_nconcat - concatenate two strings using malloc
 * @s1: first string
 * @s2: second string
 * @n: bytes to be allocated
 *
 * Return: (char *) - concatenated string, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int s1_len, s2_len, t_len;
	int i, j = 0;

	s1_len  = _strlen(s1);
	s2_len = _strlen(s2);
	t_len  = s1_len + s2_len;

	concat = (char *)malloc((i + n) + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	while (j < n)
	{
		concat[i + 1] = s2[j];
		j++;
		i++;
	}

	concat[i + 1] = '\0'; /* string terminate */

	return (concat);
}
