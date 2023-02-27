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
		j = i;
	}
	for (i = j; i >= 0; --i)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
