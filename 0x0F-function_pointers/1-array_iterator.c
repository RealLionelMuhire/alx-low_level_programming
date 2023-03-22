#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate array
 * @array: array to iterate
 * @size: size of array
 * @action: action to function pointer to that array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i = 0;

		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
