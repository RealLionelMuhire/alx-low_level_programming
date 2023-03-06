#include "main.h"

/**
 * *_memcpy - copy the data from stc to dest,with size of n
 * @dest: final destination of data
 * @src: the source of data
 * @n: size of data to be copied
 * Return: always dest at success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for(; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
