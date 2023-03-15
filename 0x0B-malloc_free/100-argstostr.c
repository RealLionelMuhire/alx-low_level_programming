#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenate arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: string after concatenation Otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*measure the length of all string arg*/
	for (i = 0; i < ac; i++)
	{
		l += strlen(av[i]) + 1; /*add +1 for '\n' character*/
	}
	/*allocate the memory of the str*/

	str = (char *)malloc(l * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	/*copy each char for each arg to str + '\n'*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
