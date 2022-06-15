#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest - string to be concatenated to
 * @src - string used in concatenation
 * Return: char * (string concat of the inputs)
 */

char * _strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while(1)
	{
		if (*(dest + i) == '\0')
		{
			while (*(src + j) != 0)
			{
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
		}
		else
		{
			i++;
			continue;
		}
	}

	return dest;
}
