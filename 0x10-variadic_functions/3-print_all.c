#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints char
 * @valist: valist
*/

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints int
 * @valist: valist
 */

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints float
 * @valist: valist
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints string
 * @valist: valist
 */

void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print changing input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int j, i = 0;
	va_list valist;
	/* defining 2-dimen array based on the format arg and it equivalent action*/
	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	/* iterate format; if datatype matched, access function via struct */
	va_start(valist, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (choice[j].letter != '\0')
		{
			if (choice[j].letter == format[i])
			{
				printf("%s", separator);
				choice[j].print_func(valist); /*pass va_arg as arg*/
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
