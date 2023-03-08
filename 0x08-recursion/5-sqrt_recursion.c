#include "main.h"

/**
 * _sqrt_recursion - computes the squareroot of a number
 * @n: a number to find its squareroot
 * Return: squareroot of a number
 */
int _sqrt_recursion(int n)
{
        if (n == 0 || n == 1)
        {
                return (n);
        }
        else if (n == 0)
        {
                return (-1);
        }
        else
        {
                return (_sq_helper(n, n / 2));
        }
}

/**
 * _sq_helper - help to computes the squareroot return to _sqrt_recursion
 * @n: a number to compute
 * @p: a square number guessed
 * Return: squareroot of a number to _sqrt_recursion
 */
int _sq_helper(int n, int p)
{
	if (p * p == n)
	{
		return (p);
	}

	else if (p * p > n)
	{
		return (_sq_helper(n, p - 1));
	}
	else if ((p * p < n && (p + 1) * (p + 1) > n))
	{
		return (-1);
	}
	else
	{
		return (_sq_helper(n, p + 1));
	}
}
