#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
