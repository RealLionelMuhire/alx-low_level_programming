#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: a number
 * Return: n % 10 at (success);
 */

int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = (n % 10);
	}
	else
	{
		r = -1 * (n % 10);
	}
	_putchar((r % 10) + '0');
	return (r % 10);
}
