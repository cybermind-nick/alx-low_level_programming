#include "main.h"

/**
 * print_alphabet_x10 - define print_alphabet_x10 in main.h
 * Description - call print_alphabet() 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int c;

		for (int c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n);
	}
}
