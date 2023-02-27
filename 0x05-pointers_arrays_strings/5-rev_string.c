#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int temp, i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = i;
	}

	while (k < j)
	{
		temp = s[k];
		s[k++] = s[j];
		s[j--] = temp;
	}
}
