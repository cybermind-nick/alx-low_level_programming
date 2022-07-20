#include "lists.h"

/**
 * free_listint - free memory allocated to a list
 * @head: start of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	/* You must free each indiviual node in a linked list */
	listint_t *ptr; /* Use to free each individual allocated node */

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next; /* Move to next allocated node */
		free(ptr); /* free current node */
	}
}
