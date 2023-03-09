#include "main.h"

/**
 * wildcmp - compares s1 nd s2
 * @s1: first string
 * @s2: second string
 * Return: 1 if they are similar, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if ((*s1 == '\0' && *s2 != '0') || (*s2 == '\0' && *s1 != '0'))
	{
		return (0);
	}
	else if (*s1 == *s2 || *s2 == '*')
	{
		/* if *s2 contains a wildcard char */
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 != '\0')
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}

}
