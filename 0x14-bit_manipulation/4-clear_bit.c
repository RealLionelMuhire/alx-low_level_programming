#include "main.h"

/**
 * clear_bit - sets the value of bit at 0
 * @n: number contains a bit
 * @index: index of the bit
 * Return: 1 at success otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int) - 1)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
