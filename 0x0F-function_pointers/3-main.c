#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0 success, otherwise exit status of 98, 99 and 100
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	int (*op_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_fun = get_op_func(argv[3]);

	if (op_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = op_fun(a, b);
	printf("%d\n", res);

	return (0);
}
