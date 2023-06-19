#include "main.h"

/**
 * *_strcat - concatenate s trings
 * @dest: to be concatenated with src
 * @src: to transferred to dest
 * Return: dest at success
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k;

	for (; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';

	return (dest);
}
