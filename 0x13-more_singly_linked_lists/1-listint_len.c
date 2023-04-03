#include "lists.h"

/**
 * listint_len - list the length of linked list
 * @h: head node
 * Return: the size of linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
