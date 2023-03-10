#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: letter to check
 * Return: 1 if c is lowercase, and 0 otherwise
 */

int _islower(int c)
{
	int check = 0;
	char p = 'a';

	for (; p <= 'z'; p++)
	{
		if (p == c)
		{
			check = 1;
		}
	}
	return (check);
}
