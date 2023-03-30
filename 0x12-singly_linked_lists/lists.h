#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct head - is the first node of linked list
 * @str: is the string stored in the node
 * @len: is an integer stored in the node
 * @next: is the pointer to next node
 */

typedef struct head
{
	char *str;
	unsigned int len;
	struct head *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
