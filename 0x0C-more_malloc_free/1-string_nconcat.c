#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings.
 * @s1: string.
 * @s2: string.
 * @n: number of bytes of s2.
 * Return: NULL or pounter.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned long int i = 0, j;

	if (s1 == NULL && s2 == NULL)
	{
		p = malloc(sizeof(char));
		return (p);
	}
	else if (s1 == NULL)
		p = malloc(sizeof(char) * (n + 1));
	else if (s2 == NULL)
		p = malloc(sizeof(char) * (strlen(s1) + 1));
	else if (n >= strlen(s2))
		p = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	else
		p = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (; i < strlen(s1); i++)
		{
			p[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; j < n; j++, i++)
		{
			if (s2[j] == '\0')
				break;
			p[i] = s2[j];
		}
	}
	p[i] = '\0';
	return (p);
}
