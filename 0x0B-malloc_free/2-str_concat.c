#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int p;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	else if (s1 == NULL)
	{
		s1 = "";
	}
	p = strlen(s1) + strlen(s2) + 1;

	c_str = (char *)malloc(p * sizeof(char));

	if (c_str == NULL)
	{
		return (NULL);
	}

	c_str = strcpy(c_str, s1);
	c_str = strcat(c_str, s2);
	return (c_str);

}
