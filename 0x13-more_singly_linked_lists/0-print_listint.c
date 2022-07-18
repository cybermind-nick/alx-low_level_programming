#include "lists.h"

/**
 * print_listint - print out the linked list
 * @h: head of the list
 *
 * Return: size of the list (int)
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	if (h == NULL)
		exit(98);

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}
