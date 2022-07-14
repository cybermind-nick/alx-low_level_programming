#include "lists.h"

/**
 * _puts - prints a string
 * @s: string
 *
 * Return: void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
}

/**
 * print_list - print out the contents of a linked list
 * h: the head of the list (pointer)
 *
 * Return: void
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t count = 0;

	if (h == NULL)
		return (count);

	p = h;
	while (p->next != NULL)
	{
		if (p->str == NULL)
		{
			_puts("(nil)");
			count++;
			p = p->next;
		}
		else
		{
			_puts(p->str);
			count++;
			p = p->next;
		}
	}

	return (count);
}
