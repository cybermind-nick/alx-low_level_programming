#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a linked list
 * @head: pointer to the starting address of the list (**)
 * @n: value of node
 *
 * Return: updated linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
		exit(98);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node; /* different from head == NULL (no *) */
	else
	{
		temp = *head; /* store the address of the head */
		for (; temp->next != NULL; temp = temp->next)
		{
			;
		}
		temp->next = new_node;
	}

	return (new_node);
}
