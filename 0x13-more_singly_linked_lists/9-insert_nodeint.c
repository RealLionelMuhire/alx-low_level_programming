#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node of linked list
 * @idx: index position
 * @n: data of new inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *n_node;
	unsigned int p = 0;

	if (!*head)
	{
		return (NULL);
	}

	n_node = (listint_t *)malloc(sizeof(listint_t));
	n_node->n = n;
	n_node->next = NULL;
	
	tmp = *head;
	while(tmp->next)
	{
		if (p == idx)
		{
			tmp->next = n_node;
			n_node = tmp->next;
			n_node->next = tmp;
			return (n_node);
		}
		tmp = tmp->next;
		p++;
	}
	return (NULL);
}
