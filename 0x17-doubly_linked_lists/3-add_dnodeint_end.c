#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of lonked list
 * @n: data of linked list
 * Return: the added node otherwsie NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *tmp;

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);

	if (!(*head))
	{
		n_node->n = n;
		n_node->prev = NULL;
		n_node->next = NULL;
		*head = n_node;
		return (n_node);
	}

	tmp = *head;

	while(tmp->next)
	{
		tmp = tmp->next;	
	}
	n_node->n = n;
	n_node->prev = tmp;
	tmp->next = n_node;

	return (n_node);
}
