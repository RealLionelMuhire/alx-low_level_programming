#include "lists.h"

int pop_listint(listint_t **head)
{

	if (!*head)
	{
		return (0);
	}
	else
	{
		return (*head->n);
		*head->next = NULL;
	}
	return (*head->n);
}
