#include "lists.h"

/**
 * sum_dlistint - computes sum of all data in linked list
 * @head: of linked list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (!head)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
