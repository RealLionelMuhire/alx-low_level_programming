#include "main.h"
/**
 * print_number - prints an integer using _putchar
 * @n: an integer to be printed
 */

void print_number(int n)
{
	int div = 1;
	int p;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / div >= 10)
	{
		div *= 10;
	}

	while (div > 0)
	{
		p = (n / div) % 10;
		_putchar('0' + p);
		div /= 10;
	}
}
