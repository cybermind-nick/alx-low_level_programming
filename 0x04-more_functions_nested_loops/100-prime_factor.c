#include <stdio.h>

/**
 * main - Print the prime factors
 *
 * Return: 0
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long divisor = 2;

	while (divisor < num)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			divisor = 2; /* reset divisor */
		}
		else
			divisor++; /* increment divisor */
	}

	printf("%lu\n", num); /* what is left in num is the largest factor */

	return (0);

}
