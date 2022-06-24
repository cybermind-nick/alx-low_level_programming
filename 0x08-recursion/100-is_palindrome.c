#include "main.h"

/**
 * compare_string - compares the chars of a strings counting inwards
 * @head: on end of a string
 * @tail: the other end
 *
 * Return: (1) if palindrome, else return (0)
 */

int compare_string(char *head, char *tail)
{
	if (head >= tail) /* this is position compared here, not actual value */
		return (1);

	if (*head != *tail) /* this is value compared here, not position */
		return (0);

	return (compare_string(head + 1, tail - 1)); /* move further inwards */
}

/**
 * _strlen - get the length of a string
 * @s: the string
 *
 * Return: int (length of string)
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 *
 * Return: (1) if it is a palindrome, else return (0)
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len < 1)
		return (0);

	return (compare_string(s, (s + (len - 1)))); /* starting cases (states) */
	/* s + (len - 1) : go to end of string */
}
