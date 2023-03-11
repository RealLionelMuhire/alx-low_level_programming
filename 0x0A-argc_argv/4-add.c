#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - print the sum of all passed arguments
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: always 0 (success) otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j, k = 0, sum = 0;

	/*if no arg passed*/
	if (argc < 2)
	{
		printf("0\n");
		return (0); }

	/*once arguments is passed*/
	for (i = 1; i < argc; i++)
	{
		/*checks whether an arg passed is a number*/
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			/* introducing i k is because is digit has to iterate in each char*/
			j = isdigit(argv[i][k]);
			if (!j)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
