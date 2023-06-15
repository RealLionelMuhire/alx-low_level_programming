#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	size_t n = 0;

	if (!head) 
		return (NULL);

	tmp = head;

	while (tmp)
	{
		if (n == index)
			return (tmp);

		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
