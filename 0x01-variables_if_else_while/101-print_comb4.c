#include <stdio.h>

/**
 * main - entry point
 * prints all possible different combinations of three digits
 * Return: always 0 (success)
 */

int main(void)
{
	int m, n, p;

	for (m = 0; m <= 7; m++)
	{
		for (n = m + 1; n <= 8; n++)
		{
			for (p = n + 1; p <= 9; p++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(p + '0');

				if ((p < 9) || (n < 8) || (m < 7))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
