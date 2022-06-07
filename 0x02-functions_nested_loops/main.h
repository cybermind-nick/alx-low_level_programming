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
#endif
