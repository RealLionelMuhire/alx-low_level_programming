#include "main.h"
/**
 * _strlen - returns the lenghth of o string
 * @s: string to return
 * Return: i at the end
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;

	}
	return (i);

}
