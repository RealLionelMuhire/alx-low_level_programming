#include "main.h"

/**
 * get_bit - get a bit of a number at the index specified
 * @index: is the location of the bit in the number
 * @n: a number contains bits
 * Return: the bit which is at the location of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
