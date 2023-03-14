#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - copy a string and return a duplicate
 * @str: string to be copied
 * Return: duplicate otherwise NULL
 */
char *_strdup(char *str)
{
	char *n_str;

	if (str == NULL)
	{
		return (NULL);
	}

	n_str = (char *)malloc(strlen(str) + 1);

	if (n_str == NULL)
	{
		return (NULL);
	}

	strcpy(n_str, str);

	return (n_str);
}
