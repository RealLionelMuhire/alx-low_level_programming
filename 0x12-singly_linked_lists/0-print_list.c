#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the lists of elements in linked list
 * @h: head node
 * Return: nodecount
 */

size_t print_list(const list_t *h)
{
	/*this is node count*/
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (Nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);

}
