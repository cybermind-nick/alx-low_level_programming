#include "main.h"

/**
 * puts2 - prints characters in a string every skip interval
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	while ((*(str + i) != '\0') && (*(str + i) != 0))
	{
		_putchar(*(str + i));
	}
}
