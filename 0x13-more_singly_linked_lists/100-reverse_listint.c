#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: head node of linked list
 * Return: head of reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_1, *node_2;

	if (!(*head))
		return (NULL);

	node_1 = (*head)->next;
	(*head)->next = NULL;

	while (node_1)
	{
		node_2 = node_1->next;
		node_1->next = *head;
		*head = node_1;
		node_1 = node_2;
	}
	return (*head);
}
