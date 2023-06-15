#include "lists.h"

/**
 * get_dnodeint_at_index - get the index of the node
 * @head: head of the linked list
 * @index: index at a location
 * Return: a linked list at index otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	size_t n = 0;

	if (!head)
		return (NULL);

	tmp = head;

	while (tmp)
	{
		if (n == index)
			return (tmp);

		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
