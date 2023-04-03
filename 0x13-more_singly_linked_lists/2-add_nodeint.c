#include "lists.h"

/**
 * add_nodeint - adds a new node at beggining
 *
 * @head: head of linked list
 * @n: integer elelment of lnked list
 *
 * Return: the new node created otherwise NULL;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;


	n_node = (listint_t *)malloc(sizeof(listint_t));
	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
