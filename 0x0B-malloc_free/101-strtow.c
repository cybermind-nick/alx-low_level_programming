#include "main.h"
#include <stdlib.h>

/**
 * strtow - spilt a string into words and store in a 2-D array
 * @str: string to spilt
 *
 * Return: 2-D array of words
 */

char **strtow(char *str)
{
	char **words;
	char *word_store;
	char *word_track; /* To hold the starting address of word store */
	int i, j, size = 0;

	word_store = NULL; /* Initialize to NULL */
	word_track = NULL;
	word_track = word_store;

	if (str == NULL || *str == "")
		return (NULL);

	/* Get the number of rows */
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
			size++;
	}

	words = (char **)(malloc((sizeof(char *) * size) + 1));

	if (words == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		*word_store = str[i];
		word_store++;

		if (str[i] == ' ' && str[i] != '\0')
		{
			words[i] = *word_track; /* POint to the start of word_store */
			*word_track = NULL;
			*word_track = word_store; /* Set to new word_store location */
		}
		i++;
	}

	words[i + 1] = NULL; /* Set last element to NULL */

	return (words);
}
