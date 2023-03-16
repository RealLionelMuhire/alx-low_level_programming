#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	/*set to zero*/
	memset(ptr, 0, nmemb * size);

	return (ptr);

}
