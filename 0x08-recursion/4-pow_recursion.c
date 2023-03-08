#include "main.h"

/**
 * _pow_recursion - computes the power of x
 * @x: the number to compute its power
 * @y: the power of that number
 * Return: the power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
