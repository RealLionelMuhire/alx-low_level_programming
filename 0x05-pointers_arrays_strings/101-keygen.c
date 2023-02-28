#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define p_len 10

/**
 * main - generate a password
 * Return: Always 0 (success)
 */

int main(void)
{
	char pwd[p_len + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
	int i;

	srand(time(NULL));

	for (i = 0; i < p_len; i++)
	{
		pwd[i] = charset[rand() % sizeof(charset) - 1];
	}

	pwd[p_len] = '\0';

	printf("%s\n", pwd);

	return (0);
}
