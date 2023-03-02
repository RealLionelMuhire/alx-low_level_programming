#include "main.h"

/**
 * *string_toupper - change lower case to upper case
 * @s: string to be changed
 * Return: s string changed into upper case
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		else
		{
			;
		}
	}
	return (s);
}
