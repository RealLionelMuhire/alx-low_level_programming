#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash_table in question
 * @key: the key to map in the hash table
 * @value: the associated value of the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t *));
	unsigned long int index;
	hash_node_t *tmp, *head;

	if (*key == '\0' || !ht)
	{
		free(new);
		return (0);
	}
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	index = hash_djb2((unsigned char *)key) % ht->size;

	head = (ht->array)[index];
	tmp = head;
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = new->value;
			return (1);
		}
		tmp = tmp->next;
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
