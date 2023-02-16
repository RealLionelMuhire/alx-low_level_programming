#include <stdio.h>
/**
 * main - entry point
 * Return: Always 1 (successfull)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, str, 59);

	return (1);
}
