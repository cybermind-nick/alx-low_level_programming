#include "lists.h"

/**
 * delete_nodeint_at_index - delete the list element at the given index
 * @head: double pointer list head
 * @index: index
 *
 * Return: value of deleted node (int)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int index_count = 0;
	listint_t *temp, *temp2;

	if (*head == NULL)
		return (-1);
	
	temp = *head;

	/* if index = 0*/
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
		while (index_count < (index - 1) && temp != NULL)
	{
		temp = temp->next;
		index_count++;
	}
	/* if index is out of range: don't delete and return */
	if (index_count != (index - 1) || temp->next == NULL)
		return (-1);
	/* link prior index before delete */
	temp2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp2);

	return (1);
}
