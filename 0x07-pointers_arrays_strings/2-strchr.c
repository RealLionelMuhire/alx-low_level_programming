#include "main.h"
#include <stddef.h>

/**
 * *_strchr - search c in string s
 * @s: string contains c
 * @c: charcter to search
 * Return: Pointer storing c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
