#include "hash_tables.h"

/**
 * hash_table_create - used to create the hash table
 * @size: size of the array
 * Return: the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	if (size < 1)
		return (NULL);

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}

	memset(h_table->array, 0, sizeof(hash_node_t) * size);

	h_table->size = size;

	return (h_table);
}
