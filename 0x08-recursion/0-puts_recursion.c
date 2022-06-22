#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string recursively
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;
	char nl = '\n';

	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i], 1);
	}
	write(1, &nl, 1);

}
