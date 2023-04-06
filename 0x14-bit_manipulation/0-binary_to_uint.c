#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: character which contains binary
 * Return: the int from binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0, n = 1, q, i = 0;
	int p;

	if (!b)
	{
		return (0);
	}

	p = strlen(b) - 1;

	while (p >= 0)
	{
		if (b[p] == '1' || b[p] == '0')
		{
			q = b[p] - '0';
			d += n * q;
			n = n * 2;
		}
		else
			return (0);
		p--;
		i++;
	}
	return (d);
}
