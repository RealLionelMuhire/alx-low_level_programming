#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: an integer to check its sign
 * Return: 1 whem Pocitve, 0 when zero, -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
