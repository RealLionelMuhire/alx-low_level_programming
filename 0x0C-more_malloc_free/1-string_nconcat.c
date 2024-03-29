#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: 2nd string
 * @n: number of bytes
 * Return: concatenated string, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, p;
	char *str;

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= l2)
	{
		n = l2;
	}

	p = l1 + n;

	str = (char *)malloc(p + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	memcpy(str, s1, l1);
	memcpy(str + l1, s2, n);
	/*str + l1, points to the end of str-pointer arthmetic*/
	str[p] = '\0';

	return (str);
}
