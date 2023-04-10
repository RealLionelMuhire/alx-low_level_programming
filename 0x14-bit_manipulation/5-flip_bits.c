#include "main.h"

/**
 * flip_bits - flips the bits
 * @n: number
 * @m: number
 * Return: flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count;

	res = n ^ m;

	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
