#include "main.h"

void print_diagonal(int n)
{
	int p, q;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (p = 1; p <= n; p++)
	{
		for (q = 1; q < p; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
