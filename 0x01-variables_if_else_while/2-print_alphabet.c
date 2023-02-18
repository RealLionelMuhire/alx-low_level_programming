#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets in lower case
 *
 * Return: Always 0 (Syccess)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
