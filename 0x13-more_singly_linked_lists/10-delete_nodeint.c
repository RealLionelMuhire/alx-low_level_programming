#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index linked list.
 * @head: head of linked list
 * @index: location of node in linked list
 * Return: 1 at success otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prv, *current;
	unsigned int count = 0;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	tmp = *head;
	while (tmp)
	{
		if (count == index - 1)
		{
			prv = tmp;
			current = tmp->next;
			if (!current)
			{
				return (-1);
			}
			prv->next = current->next;
			current->next = NULL;
			free(current);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
