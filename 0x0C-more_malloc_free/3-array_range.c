#include "main.h"
#include <stdlib.h>

/**
 * *array_range - make an array from min to max
 * @min: array[0]
 * @max: last element in array
 * Return: return an array otherwise NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
