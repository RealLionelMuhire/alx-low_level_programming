#include "main.h"

/**
 * print_rev - print in the reverse
 * @s: a string to be printed
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		i++;
	}


	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
