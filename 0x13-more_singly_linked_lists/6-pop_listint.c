#include "lists.h"

/**
 * pop_listint - get head node data and delete node
 * @head: pointer to starting address
 *
 * Return: head node data (int)
 */

int pop_listint(listint_t **head)
{
	int val;
	listint_t *popped_node;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	val = (*head)->n;
	popped_node = *head;
	*head = popped_node->next;
	free(popped_node);
	/* head = &((*head)->next); */

	return (val);
}
