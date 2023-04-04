#include "lists.h"

/**
 * sum_listint - computes the sum of linked list data
 * @head: head node of linked list
 * Return: always sum of data otherwise 0
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
