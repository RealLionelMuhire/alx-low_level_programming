#include "hash_tables"

/**
 * hash_table_create - used to create the hash table
 * @size: size of the array
 * Return: the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	size_t i;

	h_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	h_table->array = malloc(sizeof(hash_node_t)* size);
	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	h_table->size = size;

	return (h_hash);
}
