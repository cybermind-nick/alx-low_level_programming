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
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* account for n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
