#include "main.h"

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	j = n -1;
	i = 0;

	while(i < j)
	{
		tmp = a[i];
		a[i++] = a[j];
		a[j--] = tmp;
	}
}

