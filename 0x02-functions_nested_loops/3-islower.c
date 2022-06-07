#include "main.h"

/**
 * _islower - definition of _islower() in main
 * @c: character to be checked
 * description: checks if a character is lowercase
 * Return: 1 if lowercase, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
