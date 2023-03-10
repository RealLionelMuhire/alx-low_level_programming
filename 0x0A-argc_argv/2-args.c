#include <stdio.h>

/**
 * main - prints arguments
 * @argc: number of arguments to be printed
 * @argv: arguments to be printed
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
