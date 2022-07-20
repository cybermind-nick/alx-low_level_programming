#include "lists.h"

/**
 * add_nodeint - add node to beginning
 * @h: pointer to list head address
 * @n: node value to add
 *
 * Return: address to updated list (listint_t *)
 */

listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *h;
	*h = new_node;

	return (*h);
}
