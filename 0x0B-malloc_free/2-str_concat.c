#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to new string, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int s1_size, s2_size = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_size] != 0)
		s1_size++;

	while (s2[s2_size] != 0)
		s2_size++;

	new_str = (char *)(malloc((sizeof(char) * (s1_size + s2_size)) + 1));

	if (new_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		new_str[s1_size + i] = s2[i];
		i++;
	}

	return (new_str);
}
