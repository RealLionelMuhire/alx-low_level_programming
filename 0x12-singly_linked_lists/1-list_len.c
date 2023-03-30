#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - return the lenght of Linked List
 * @h: head node of linked list
 * Return: the number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
