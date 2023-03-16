#include <stdio.h>
/**
 * main - entry point
 * Write a program that prints all possible combinations of two two-digit numbers.
 * Return: always 0 (success)
 */

int main(void)
{
	int m, n, p, q;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (p = 0; p <= 9; p++)
			{
				for (q = 1; q <= 9; q++)
				{
					if ((q <= 9) || (q <= 9) || (q <= 9) || (q <= 9))
					{
						putchar(m + '0');
						putchar(n + '0');
						putchar(' ');
						putchar(p + '0');
						putchar(q + '0');
					}
					putchar(' ');
					putchar(',');
				}
			}

		}
	}
	return (0);
}
