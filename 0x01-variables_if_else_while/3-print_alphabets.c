#include <stdio.h>

/**
 * main - entry point
 * printing alphabetics in lowerand upper cases
 * Return: always 0 (success)
 */
int main(void)
{
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
