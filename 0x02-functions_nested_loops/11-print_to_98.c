#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - definition of the function
 * @n: int - starting point
 * Description: Print to 98 in ascending or descending order
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else
		printf("%d\n", n);
}
