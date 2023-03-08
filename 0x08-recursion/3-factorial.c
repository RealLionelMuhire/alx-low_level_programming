#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: a number to find its factorial
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
