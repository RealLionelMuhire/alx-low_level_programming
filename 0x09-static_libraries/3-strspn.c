#include "main.h"

/**
 * _strspn - get the length of prefix substring
 * @s: string to check
 * @accept: a string contains letters of prefix to s
 * Return: j initial bytes of string contains anly bytes of j
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0;

	for ( ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}

		}
		if (accept[j] == '\0')
		{
			return (k);
		}
	}
	return (k);
}
