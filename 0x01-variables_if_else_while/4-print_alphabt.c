#include <stdio.h>
/**
 * main - entry point and prints alphabets except
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		else
		{
			;
		}
	}
	putchar('\n');

	return (0);
}
