#include "lists.h"

/**
 * get_nodeint_at_index - get the list node at the given index
 * @head: start of the list
 * @n: index to retrieve
 *
 * Return: retrieved node (listint_t)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int n)
{
	unsigned int index_count = 0;

	if (head == NULL)
		return (NULL);

	while (index_count != n)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index_count++;
	}

	return (head);
}
