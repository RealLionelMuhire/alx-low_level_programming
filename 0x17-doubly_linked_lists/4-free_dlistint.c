#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *current;

	if (!head)
		return;

	current = head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	head = NULL;
}
