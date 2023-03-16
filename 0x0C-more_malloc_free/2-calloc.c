#include "main.h"
#include "stdlib.h"

/**
 * *_calloc - allocate multiple blocks of memory
 * @nmemb: number of blocks
 * @size: size of each block
 * Return: ptr to those blocks
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);

}
