#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *seperator, const unsigned int n, ...);

void print_strings(const char *seperator, const unsigned int n, ...);

void print_all(const char * const format, ...);

typedef struct dt
{
	char letter;
	void (*print_func)(va_list);
} datatype;

#endif
