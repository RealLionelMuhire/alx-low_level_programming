#include "lists.h"

/**
 * print_listint - print the list of integers in linked list
 * @h: head of linked list
 * Return: the size of linked list otherwise 0;
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
