#include "lists.h"

/**
 * insert_dnodeint_at_index - it insert the node at specified index
 * @idx: index
 * @h: head of linked list
 * @n: node data
 * Return: an inserted node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *cur, *n_node;
	size_t count = 0;

	if (!(*h) || idx == 0)
		return (add_dnodeint(h, n));

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;

	cur = *h;

	while (cur)
	{
		cur = cur->next;
		count++;
		if (idx - 1 == count)
		{
			tmp = cur->next;
			tmp->prev = n_node;
			cur->next = n_node;
			n_node->prev = cur;
			n_node->next = tmp;
			return (n_node);
		}
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
