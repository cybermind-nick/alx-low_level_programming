#include "main.h"

/**
 * _isdigit - check if a character is a number
 * @c: character to be checked
 * Return: 1 if true, else return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
