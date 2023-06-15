#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of linked list
 * @n: data of new node
 * Return: new node added otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head)
		(*head)->prev = n_node;

	*head = n_node;

	return (n_node);
}
