#include "main.h"

/**
 * puts2 - prints characters in a string every skip interval
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while ((*(str + i) != '\0') && (*(str + i) != 0))
	{
		_putchar(*(str + i));
		i += 2;

		if (*(str + (i - 1)) == '\0') /* Go back on char and check */
		{
			break;
		}
	}
	_putchar('\n');
}
