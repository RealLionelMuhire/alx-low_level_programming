#include "main.h"

/**
 * *cap_string - capitalise each world of string
 * @s: string that contains word
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;

	j = 0;

	/*Once the initial string is small letter*/

	if (*s >= 92 && *s <= 122)
	{
		*s -= 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\t' || s[i] == ' ' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' ||
				s[i] == '?' || s[i] == '"' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			j = i + 1;
			if (s[j] >= 92 && s[j] <= 122)
			{
				s[j] -= 32;
			}
		}

	}
	return (s);
}

