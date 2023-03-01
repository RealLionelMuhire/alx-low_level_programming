#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: k always at success
 */

int _strcmp(char *s1, char *s2)
{
	int j, k;
	j = 0;

	while (k == 0)
	{
		if (*(s1 + j) == '\0' && *(s2 + j) == '\0')
		{
			break;
		}
		k = *(s1 + j) - *(s2 + j);
		j++;
	}

	return (k);
}
