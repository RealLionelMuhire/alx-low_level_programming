#include "main.h"
#include <string.h>
#define MAX_LEN 1000

/**
 * is_palindrome - checks whether s is palindome
 * @s: string to be checked
 * Return: 1 when is palindome, otherwise 0
 */

int is_palindrome(char *s)
{
	int l = strlen(s);
	char substr[MAX_LEN];
	int res;

	if (l <= 1)
	{
		return (1);
	}

	else if (s[0] != s[l - 1])
	{
		return (0);
	}

	else
	{
		strncpy(substr, s + 1, l - 2);
		substr[l - 2] = '\0';
		res = is_palindrome(substr);
		return (res);
	}
}
