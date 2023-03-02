#include "main.h"

/**
 * *_strncat - concatenates n bytes from src to dest
 * @dest: final destination of strings
 * @src: the source of string to be concatenated
 * @n: number of bytes
 * Return: dest at success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	dest[i] = '\0';

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
