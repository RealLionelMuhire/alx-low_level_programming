#include "main.h"

/**
 * *rot13 - makes a string rot13
 * @s: a string to run rot13
 * Return: s is rot13 made string
 */
char *rot13(char *s)
{
	int m, n;

	char lo[] = "abcdefghijklmnopqrstuvwxyz";
	char up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 26; n++)
		{
			if (s[m] == lo[n])
			{
				s[m] = lo[(n + 13) % 26];
			}

			else if (s[m] == up[n])
			{
				s[m] = up[(n + 13) % 26];
			}
		}
	}
return (s);

}

