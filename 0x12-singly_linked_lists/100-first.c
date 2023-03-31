#include <stdio.h>

/**
 * mprint - prints the sentence
 * Return: always 0 success
 */

int mprint(void)__attribute__((constructor));

int mprint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	return (0);
}

