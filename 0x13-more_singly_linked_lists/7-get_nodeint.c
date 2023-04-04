#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: head of linked list
 * @index: the index number of node
 * Return: a node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp;

	if (!head)
		return (NULL);
	tmp = head;

	while (tmp)
	{
		if (n == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
