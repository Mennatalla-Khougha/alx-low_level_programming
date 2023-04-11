#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - return a pointer to space contain a copy of the string given
 * @str: string given.
 * Return: a pointer to a dupicate string.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned long int i;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (strlen(str) + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		s[i] = str[i];
	}

	return (s);
}
