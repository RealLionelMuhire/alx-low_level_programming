#include "lists.h"

/**
 * free_listint_safe - free safely even in the loop
 * @h: head of node
 * Return: count of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t count = 0;

	if (!(h && *h))
	{
		return (count);
	}

	while (*h)
	{
		count++;
		if (*h > (*h)->next)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (count);
}
