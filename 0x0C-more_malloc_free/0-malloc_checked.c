#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate the memory
 * @b: an int to allocate its memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
