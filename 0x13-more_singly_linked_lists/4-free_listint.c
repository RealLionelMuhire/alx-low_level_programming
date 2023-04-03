#include "lists.h"

/**
 * free_listint - free the memory allocated
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
