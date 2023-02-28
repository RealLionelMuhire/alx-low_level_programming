#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, k, j = 0;

	for (i = 0; str[i] != 0; i++)
	{
		;
	}
	i = i - 1;

	if (i % 2 != 0)
	{
		k = (i - 1) / 2;
	}
	else if (i % 2 == 0)
	{
		k = i / 2;
	}
	for (j = k; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
