#include "main.h"

/**
 * print_square - prints the squares
 * @size: size of a square
 */

void print_square(int size)
{
	int n, p;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (n = 1; n <= size; n++)
	{
		for (p = 1; p <= size; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
