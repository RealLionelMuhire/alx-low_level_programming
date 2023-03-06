#include "main.h"

/**
 * *_memset - fills first byte of memory area pointed to by s with const byte b
 * @s: final destination of the memory
 * @b: initial locationof the memory
 * @n: size of memory to be set
 * Return: s when success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

