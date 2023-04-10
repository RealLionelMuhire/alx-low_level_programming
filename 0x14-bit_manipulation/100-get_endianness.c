#include "main.h"

/**
 * get_endianness - checks endianeness
 * Return: 1 at big else 0
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c)
		return (1);
	else
		return (0);
}
