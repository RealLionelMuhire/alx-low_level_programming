#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 */

void more_numbers(void)
{
	int n;
	int p;

	for (n = 1; n <= 10; n++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p / 10 != 0)
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
