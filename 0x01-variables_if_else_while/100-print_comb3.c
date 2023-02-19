#include <stdio.h>

/**
 * main - print all combinations of unique numbers from 0 to 99
 * Return: always 0 (success)
 */

int main(void)
{
	int n, m;
	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar((n) + '0');
			putchar((m) + '0');
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
