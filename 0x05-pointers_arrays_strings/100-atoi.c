#include "main.h"

/**
 * _atoi - convert Ascii to Integer
 * @s: string to be converted into a number
 * Return: A conerted integer
 */

int _atoi(char *s)
{
	int res, sign, i;

	sign = 1;
	res = 0;
	i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
		}
		else if (res > 0)
		{
			break;
		}
		i++;
	}
	return (sign * res);
}
