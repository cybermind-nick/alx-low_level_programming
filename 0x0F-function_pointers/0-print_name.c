#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints out the name of using a custom function
 * @name: string to be printed
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
