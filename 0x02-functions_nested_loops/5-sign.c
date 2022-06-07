#include "main.h"

/**
 * print_sign - function to return sign of integer
 * -- declared in main.h
 * @n: number to be checked
 * Return: 1 if +, 0 of == 0, else return -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
