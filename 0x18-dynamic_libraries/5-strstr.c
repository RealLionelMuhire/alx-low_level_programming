#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @haystack: the string that contains a substring
 * @needle: the substring
 * Return: always haystack or Null
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h == *n && *n != '\0')
			{
				h++;
				n++;

			}
			if (*n == '\0')
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}
