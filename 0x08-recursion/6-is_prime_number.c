#include "main.h"
/**
 * is_prime_number - checks wether n is a prime number
 * @n: a number to be checked
 * Return: it returns the output of is_prime _helper
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - helps is prime to check wether n is a prime number
 * @n: a number to checcked
 * @p: a testing number
 * Return: 1 once it is a prime number otherwise zero
 */
int is_prime_helper(int n, int p)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % p == 0)
	{
		return (0);
	}
	else if (p >= _sqrt_recursion(n))
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, p + 1));
	}


}
