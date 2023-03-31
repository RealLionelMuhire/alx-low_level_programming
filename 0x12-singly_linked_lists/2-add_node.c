#include "lists.h"

/**
 * add_node - adds a new node to a linked list
 * @head: head of new node
 * @str: string of nodei
 * Return: a new node added otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = strlen(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
