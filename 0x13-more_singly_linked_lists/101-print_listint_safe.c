#include "lists.h"

/**
 * print_listint_safe - prints the list with no infinite loop
 * @head: head of the node
 * Return: total number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	/*check if the head is NULL*/
	if (!head)
	{
		exit(98);
	}

	while (head)
	{
		/*print the data and the address and increament*/
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		/**
		 * Check if there is a loop, if address of tmp, is lower than the
		 * the address tmp->next, it means that the tmp->next was
		 * allocated before tmp, thus a loop is found
		 */
		if (head > head->next)
			head = head->next;
		else
		{
			/*prints the content of the next node and exit*/
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (count);
}
