#include <stdio.h>
/**
 * main - prints the name of app
 * @argc: number of all arguments
 * @argv: array contains all arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	printf("%s\n", argv[0]);
	return (0);
}
