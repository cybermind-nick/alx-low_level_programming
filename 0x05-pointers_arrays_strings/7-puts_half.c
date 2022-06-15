#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 *
 * Description: If the number of characters is odd,
 * the function should print the last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int strAvg;
	int len = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen */
	if (len % 2 != 0)/* odd character*/
	{
		strAvg = (len / 2) + 1;
	}
	else
	{
		strAvg = (len / 2);
	}

	while (strAvg < len)
	{
		_putchar(str[strAvg]);
		strAvg++;
	}
	_putchar('\n');
}
