#include "lists.h"

/**
 * print_listint_safe - prints the list with no infinite loop
 * @head: head of the node
 * Return: total number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tmp;

	/*check if the head is NULL*/
	if (!head)
	{
		exit(98);
	}

	tmp = head;
	while (tmp)
	{
		/*print the data and the address and increament*/
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;

		/**
		 * Check if there is a loop, if address of tmp, is lower than the
		 * the address tmp->next, it means that the tmp->next was
		 * allocated before tmp, thus a loop is found
		 */
		if (tmp < tmp->next)
		{
			/*prints the content of the next node and exit*/
			tmp = tmp->next;
			printf("->[%p] %d\n", (void *)tmp, tmp->n);
			exit(98);
		}
		else
			tmp = tmp->next;
	}
	return (count);
}
