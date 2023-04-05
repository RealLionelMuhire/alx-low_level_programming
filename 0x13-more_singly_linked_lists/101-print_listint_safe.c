#include "lists.h"

/**
 * print_listint_safe - prints the list with no infinite loop
 * @head: head of the node
 * Return: total number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (!head)
		exit(98);

	while (head)
	{
		/*print the data and the address and increament*/
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			/*prints the content of the next node and exit*/
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (count);
}
