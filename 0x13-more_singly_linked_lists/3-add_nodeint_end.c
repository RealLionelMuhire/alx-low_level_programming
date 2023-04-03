#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of linked list
 *
 * @n: integer element in linked list
 * @head: head pointer
 * Return: the added node otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *n_node;

	n_node = (listint_t *)malloc(sizeof(listint_t));
	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = n_node;
		tmp = n_node->next;
	}
	return (n_node);
}
