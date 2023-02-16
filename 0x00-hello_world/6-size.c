#include <stdio.h>
/**
 * main - entry point
 * Return: O (Success)
 */
int main(void)
{
	char a;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("size of char: %ld byte(s)\n", sizeof(a));
	printf("size of int: %ld byte(s)\n", sizeof(i));
	printf("size of long int: %ld byte(s)\n", sizeof(ld));
	printf("size of long long int: %ld byte(s)\n", sizeof(lld));
	printf("size of float: %ld byte(s)\n", sizeof(f));

	return (0);
}
