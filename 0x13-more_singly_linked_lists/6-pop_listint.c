#include "lists.h"

/**
 * pop_listint - deletes the head of linked list and return its data
 * @head: head node of linked list
 * Return: the data of deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int p;

	if (!head || !*head)
	{
		return (0);
	}

	tmp = *head;
	*head = (*head)->next;
	p = tmp->n;
	free(tmp);
	return (p);
}
