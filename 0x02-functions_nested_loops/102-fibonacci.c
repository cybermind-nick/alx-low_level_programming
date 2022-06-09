#include <stdio.h>

void print_fibonacci(int n);

/**
 * main - Program entry point
 * Description - Print the fibonacci sequence
 * Return: 0 (Success)
 */

int main(void)
{
	print_fibonacci(100);
	return (0);
}

/**
 * print_fibonacci - Prints the n sequence of fibonacci numbers
 * @n: the number of terms of the fibonacci sequence to be printed
 * Return: void
 */

void print_fibonacci(int n)
{
	static long first_no = 0;
	static long second_no = 1;
	static long next_fib;

	if (n > 0)
	{
		next_fib = first_no + second_no;
		first_no = second_no; /* for the next pass */
		second_no = next_fib; /* for the next pass */

		printf("%ld, ", next_fib);

		print_fibonacci(n - 1); /* Go to next term */
	}
	putchar('\n');
}
