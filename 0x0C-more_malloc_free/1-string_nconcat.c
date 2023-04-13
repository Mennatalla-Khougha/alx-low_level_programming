#include <stdio.h>
#include<stdlib.h>
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
	int i = 0, j;

	p = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (p == NULL)
		return (NULL);

	for (; i < strlen(s1); i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < n; j++; i++)
	{
		p[i] = s2[j];
	}

	p[i] = '\0';

	return (p);
}
