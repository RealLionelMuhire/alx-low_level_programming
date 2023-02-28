#include "main.h"
#include <stdio.h>

/**
 * print_array - rints n elements of an array of integers
 * @a: array to be printed
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != '\a')
		{
			printf("%d", a[i]);

			if (i < n - 1)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
