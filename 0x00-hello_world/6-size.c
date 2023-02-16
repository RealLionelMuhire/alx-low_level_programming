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

	printf("size of a char: %ld byte(s)\n", sizeof(a));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(ld));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lld));
	printf("size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
