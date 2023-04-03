#include "lists.h"

/**
 * free_listint2 - free allocated memory of linked list
 * @head: head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (!head)
		return;

	current = *head;


	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
