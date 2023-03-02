#include "main.h"

/**
 * *rot13 - makes a string rot13
 * @s: a string to run rot13
 * Return: s is rot13 made string
 */
char *rot13(char *s)
{
	int m, n;

	char lo[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char up[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[m] == lo[n])
			{
				s[m] = up[n];
				break;
			}

		}
	}
return (s);

}

