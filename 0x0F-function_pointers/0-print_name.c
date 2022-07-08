#include "main.h"
#include <stdio.h>

/**
 * print_name - prints out the name of using a custom function
 * @name: string to be printed
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
