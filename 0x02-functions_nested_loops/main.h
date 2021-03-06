#ifndef MAIN_H

/**
 * _putchar - it writes a character to STDOUT
 * @c - the character to be written
 *
 * Return: 1 (ON Success)
 */

int _putchar(char c);

/**
 * print_alphabet - prints alphabet in lowercase
 * input: void
 *
 * Return: void
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - call print_alpahet() 10 times
 * input: void
 *
 * Return: void
 */

void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lowercase
 * input: char c - the character to be checked
 *
 * Return: 1 (if lowercase case) else return 0*/

int _islower(int c);

/**
 * _isalpha - checks if a character is an alphabet
 * @c: The character to be checked
 *
 * Return: 1 if an alphabet, else return 0
 */

int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 * Return: 1 if + and > 0, 0 if == 0, else return -1 ie < 0
 */

int print_sign(int n);

/**
 * _abs - returns the absolute value of a number
 * @n: the number to be evaluated
 * Return: n
 */

int _abs(int n);

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be evaluated
 * Return: a where a is the last digit in n -> a * 10**0
 */

int print_last_digit(int n);

/**
 * jack_bauer - print his every minute
 *
 * Return: void
 */

void jack_bauer(void);

/**
 * times_table - print 9x9 times table
 * Return: void
 */

void times_table(void);

/**
 * add - add two integers
 * Return: void
 */

int add(int x, int y);

/**
 * print_to_98 - in ascending or descending order
 *
 * Return: void
 */

void print_to_98(int n);

/**
 * print_times_table - prints the n times table
 *
 * Return void
 */

void print_times_table(int n);

/**
 * put_unit - print_times_table helper function
 * @n: result
 * Return: void
 */

void put_unit(int n);

/**
 * print_tens - print_times_table helper function
 * @n: result
 * Return: void
 */

void put_tens(int n);

/**
 * put_hundred - print_times_table helper function
 * @n: result
 * Return: void
 */

void put_hundred(int n);

/**
 * print_fibonacci - print n terms in fibonacci sequence
 * @n: number of terms
 * Return: void
 */

void print_fibonacci(int n);
#endif
