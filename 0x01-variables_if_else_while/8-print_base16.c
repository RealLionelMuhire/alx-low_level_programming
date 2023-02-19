#include <stdio.h>

/**
 * main - entry point
 * prints all base 16 numbers in hex
 * return: always 0 (success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 1; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
