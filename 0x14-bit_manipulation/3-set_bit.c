#include "main.h"

/**
 * set_bit - sets the bit at thespecified index
 * @index: index place of the bit
 * Return: 1 at succes otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n |= (1 << index);
	return (1);
}
