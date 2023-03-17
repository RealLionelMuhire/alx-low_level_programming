#include <stdio.h>
#include <stdlib.h>

/**
 * mul - multiplies 2 numbers
 * @n1: the 1st number
 * @n2: the second number
 * Return: the products of 2 numbers
 */

int mul(int n1, int n2)
{
	return (n1 * n2);
}

/**
 * main - detect the arguments if they are numbers
 * @argc: number of command line arguments
 * @argv: the arguments in the commandline
 * Return: always 0 (success), otherwise exit(98)
 */

int main(int argc, char *argv[])
{
	int n1, n2, m;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!atoi(argv[1]) || !atoi(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	m = mul(n1, n2);
	printf("%d\n", m);

	return (0);
}
