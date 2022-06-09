#include <stdio.h>

/**
 * main - Program entry point
 * Description - Print the fibonacci sequence
 * Return: void
 */

int main(void)
{
	print_fibonacci(100);
}

/**
 * print_fibonacci - Prints the n sequence of fibonacci numbers
 *
 * Return: void
 */

void print_fibonacci(int n)
{
	static int first_no, second_no = 0, 1;
	static int next_fib;

	if (n > 0)
	{
		next_fib = first_no + second_no;
		first_no = second_no; /* for the next pass */
		second_no = next_fib; /* for the next pass */

		printf("%d, ", next_fib);

		print_fibonacci(n - 1); /* Go to next term */
	}
	putchar('\n');
}
