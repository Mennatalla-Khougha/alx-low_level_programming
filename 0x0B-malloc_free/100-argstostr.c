#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments
 * @ac: int;
 * @av: array;
 * Return: pointer or NULL.
 */

char *argstostr(int ac, char **av)
{
	int i, k = 0, l = 0;
	unsigned long int j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		k += strlen(av[i]);
	str = malloc(sizeof(char) * k + ac);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++, l++)
		{
			str[l] = av[i][j];
		}
		str[l++] = '\n';
	}
	return (str);
}
