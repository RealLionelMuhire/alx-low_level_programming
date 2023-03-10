#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 argv
 * @argv: arguments to multiply
 * @argc: number of arguments
 * Return: 0 at success, otherwise 1
 */

int main(int argc, char **argv)
{

	int n;
	int p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	p = atoi(argv[2]);

	printf("%d\n", n * p);
	return (0);
}
