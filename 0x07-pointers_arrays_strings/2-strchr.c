#include "main.h"

/**
 * _strchr - locate a character in a string.
 * @s: string.
 * @c: character to be located.
 * Return: a pointer to the first occurance of c. or null if not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}

	return (s + i - 1);
}
