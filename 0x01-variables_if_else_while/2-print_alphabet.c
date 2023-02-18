#include <stdio.h>

/**
 * main - prints the alphabets in lower case
 *
 * Return: Always 0 (Syccess)
 */
int main(void)
{
	char low;

	for (low = 'a'; low >= 'z'; low++)
	{
		putchar(low);
	}

	return (0);
}
