#include "main.h"

/**
 * print_last_digit - declaration in main
 * Description: Computes the last digit of a number
 * @n: the number to be evaluated
 * Return: a where a is the last digit in n -> a * 10**1
 */

int print_last_digit(int n)
{
	int i = (n % 10); /* Get the last digit */

	i = i < 0 ? i * -1 : i; /* if result is < 0, convert (for INT_MIN) */
	_putchar('0' + i); /* Print out the digit */
	return (i);
}
