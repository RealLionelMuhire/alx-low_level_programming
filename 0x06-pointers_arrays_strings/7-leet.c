#include "main.h"
/**
 * *leet - replace a specific letter by a number
 * @s: string that contains a letter
 * Return: s after replacing specified letters
 */

char *leet(char *s)
{
	char let[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}

