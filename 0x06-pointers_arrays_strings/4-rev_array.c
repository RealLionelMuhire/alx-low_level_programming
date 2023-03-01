#include "main.h"
/**
 * reverse_array - it reverses an array
 * @a: array to be reversed
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	j = n - 1;
	i = 0;

	while (i < j)
	{
		tmp = a[i];
		a[i++] = a[j];
		a[j--] = tmp;
	}
}

