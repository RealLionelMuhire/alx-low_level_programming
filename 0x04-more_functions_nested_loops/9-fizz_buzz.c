#include <stdio.h>

/**
 * main - prints out numbers and fizzBuzz
 * Return: always 0 (success)
 */

int main(void)
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
			printf("%i", p);
		}

		if (p < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
