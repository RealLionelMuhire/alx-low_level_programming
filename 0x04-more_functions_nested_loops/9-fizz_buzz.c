#include <stdio.h>

/**
 * main - prints out numbers and fizzBuzz
 */

void main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if (((p % 3) == 0) && ((p % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((p % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((p % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", p);
		}
		printf(" ");
	}
	printf("\n");
}
