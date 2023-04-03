#include "lists.h"

/**
 * pop_listint - deletes the head of linked list and return its data
 * @head: head node of linked list
 * Return: the data of deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (!head)
	{
		return (0);
	}

	tmp = *head;
	return (tmp->n);
	tmp->next = NULL;

	return (tmp->n);
}
