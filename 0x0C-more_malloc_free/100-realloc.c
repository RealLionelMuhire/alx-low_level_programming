#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocate the memory
 * @ptr: the ptr that is initially allocated
 * @new_size: size of new reallocated memory
 * @old_size: size of pre allocated memory
 * Return: new_ptr at success, ptr when both sizes are eqaul, otherwise NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
	}
	return (new_ptr);


}
