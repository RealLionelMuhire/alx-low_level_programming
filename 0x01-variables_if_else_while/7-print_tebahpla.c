#include <stdio.h>

/**
 * main - entry point
 * print alphabets in reverse
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
