#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of a triangle
 */

void print_triangle(int size)
{
	int n, p, q;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (n = 1; n <= size; n++)
	{
		for (p = size - n; p >= 1; p--)
		{
			_putchar(' ');
		}

		for (q = 1; q <= n; q++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
