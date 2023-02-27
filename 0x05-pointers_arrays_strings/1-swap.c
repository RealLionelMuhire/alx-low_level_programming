#include "main.h"

/**
 * swap_int - swaps 2 values pointed to 2pointers
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
