#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	n[index]
}
