#include <stdio.h>

/**
 * main - print 1 to 100
 * Description: print from 1 - 100 using,
 * multiples of 3 as Fizz,
 * multiples of 5 as Buzz
 * and multiple of both 3 and 5 as FizzBuzz
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
