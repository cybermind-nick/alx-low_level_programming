#include "main.h"

/**
 * _isupper - function to check if a char is uppercase
 * @c: char to be checked
 * Return: 1 if uppercase, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
