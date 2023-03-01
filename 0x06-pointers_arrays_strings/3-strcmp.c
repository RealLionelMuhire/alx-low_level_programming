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

	for (j = 0; s1[j] != '\0'; j++)
	{
		if (s1[j] == s2[j])
		{
			;
		}
		else
		{
			break;
		}
	}
	k = s1[j] - s2[j];

	return (k);
}
