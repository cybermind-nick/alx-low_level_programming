#include "main.h"

/**
 * strcmp - compare string and return a value
 * @s1: first string (decider)
 * @s2: second string
 *
 * Return: int (numeric value of comparison)
 */

int strcmp(char *s1, char *s2)
{
	int i;
	int cmp = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			cmp--;
		else if (s1[i] > s2 [i])
			cmp++;
		else
			continue;
	}

	return (cmp);
}
