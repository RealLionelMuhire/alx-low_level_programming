#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @size: size of array contains integers
 * @cmp: point to a function that compare array
 * @array: array contains int
 * Return: a searched int if found, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
