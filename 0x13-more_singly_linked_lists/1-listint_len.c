#include "lists.h"

/**
 * listint_len - get the number of elements in a linked list
 * @h: start of the list
 *
 * Return: the number of elements (size_t)
 */

size_t listint_len(const listint_t *h)
{
	size_t element_count = 0;

	for (; h != NULL; h = h->next)
		element_count++;

	return (element_count);
}
