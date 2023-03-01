#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @src: the source of string to be copied
 * @dest: final destination
 * @n: bytes to be copied
 * Return: dest at success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i <= n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
