#include "lists.h"

/**
 * dlistint_len - computes the length of linked list
 * @h: head of linked list
 * Return: always length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
