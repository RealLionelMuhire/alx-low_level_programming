#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	long n = 612852475143, i = 2;

	for (i = 2; i < n; i++)
	{
		while ((n % i) == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);

	return (0);
}
