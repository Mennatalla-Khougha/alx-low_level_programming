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
	int i, j, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		k += strlen(av[i]);
	str = malloc(sizeof(char) * k);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); i++; l++)
		{
			str[l] = av[i][j];
		}
		str[l++] = '\n';
	}
	return (str);

