#include "main.h"

/**
 * _isalpha - definition of 'main.h' isalpha()
 * @c: character to be checked
 * description: checks if a character is an alphabet
 * Return: 1 if alphabet, else return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
