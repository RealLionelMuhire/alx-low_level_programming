#include "hash_tables.h"

/**
 * hash_djb2 - hash function that uses djb2 algorithm
 * @str: passed string
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value = 5381;
	int c;

	while ((c = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + c;
	}
	return (hash_value);
}
