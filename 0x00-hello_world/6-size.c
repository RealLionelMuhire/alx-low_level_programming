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

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lld));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
