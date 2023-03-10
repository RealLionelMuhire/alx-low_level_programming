#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	char ch;
	int n = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			n = 1;
		}
	}
	return (n);
}
