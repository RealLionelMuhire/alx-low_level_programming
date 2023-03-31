#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list
 * @head: head node
 * @str: string in every node
 * Return: new_node added otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len;
	list_t *new_node, *current;

	new_node = (list_t *)malloc(sizeof(list_t));
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = strlen(str);
	new_node->len = len;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node->next = NULL;

	return (new_node);

}
