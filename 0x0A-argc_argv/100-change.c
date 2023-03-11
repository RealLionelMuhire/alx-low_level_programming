#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes the coins of the argv
 * @argc: number of arguments
 * @argv: arguments entered in the command line
 * Return: always 0 (succes) otherwise 1
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int n_coin = 0;
	int c;
	int i;


	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	c = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		n_coin += c / coins[i];
		c = c % coins[i];
	}
	printf("%d\n", n_coin);
	return (0);
}
