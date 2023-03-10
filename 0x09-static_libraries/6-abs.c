#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @n: an integer to print
 * Return: always 0(success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
