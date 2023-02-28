#include "main.h"

/**
 * *_strcpy - copies the string from one address to another
 * @dest: final destination
 * @src: initial destination
 * Return: final destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
