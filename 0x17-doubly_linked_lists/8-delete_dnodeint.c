#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index linked list
 * @index: is the index of the node that should be deleted.
 * @head: head of linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *cur;
	size_t count = 0;

	if (!(*head))
		return (-1);
	cur = *head;

	while (cur)
	{
		if (count == index)
		{
			if (index == 0)
			{
				*head = cur->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				cur->prev->next = cur->next;
						if (cur->next)
					cur->next->prev = cur->prev;
			}
			tmp = cur;
			cur = cur->next;
			free(tmp);
			return (1);
		}
		count++;
		cur = cur->next;
	}
	return (-1);
}
