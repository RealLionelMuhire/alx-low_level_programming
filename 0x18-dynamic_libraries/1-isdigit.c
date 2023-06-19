#include "main.h"

/**
 * _isdigit - checkes what c is a digit between 0 and 9
 * @c: charcter to be checjed
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int dg = 0;
	int n = 0;

	for (dg = '0'; dg <= '9'; dg++)
	{
		if (c == dg)
		{
			n = 1;
		}
	}
	return (n);
}
