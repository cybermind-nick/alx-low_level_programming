#include "lists.h"

/**
 * list_len - get length of linked list
 * @h: pointer to head of linked list
 *
 * Return: size of list (int)
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		exit(98);

	if (h->next == NULL)
		return (1);

	return (1 + list_len(h->next));
}
