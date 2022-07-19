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

	if (head == NULL)
		exit(98);

	val = (*head)->n;
	head = &((*head)->next);

	return (val);
}
