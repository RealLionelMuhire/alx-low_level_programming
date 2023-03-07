#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagonal suma
 * @a: array of matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j;
	int sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + i * size + j);
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
