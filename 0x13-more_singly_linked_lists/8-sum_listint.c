#include "lists.h"

/**
 * sum_listint - sum up all the values of the linked list
 * @head: start of the linked list
 *
 * Return: Total sum (int)
 */

int sum_listint(listint_t *head)
{
	int t_sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		t_sum += head->n;
		head = head->next;
	}

	return (t_sum);
}
