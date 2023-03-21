#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated by dog and its attributes
 * @d: dog structure
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	if (d != NULL)
	{
		free(d);
	}
	else
	{
		return;
	}
}
