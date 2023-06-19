#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed out
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
