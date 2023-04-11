#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * Return: NULL, or a pointer to concatanted string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned long int i, j;
	char *string;

	if (s1 == NULL && s2 == NULL)
		string = malloc(sizeof(char));
	else if (s1 == NULL)
		string = malloc(sizeof(char) * (strlen(s2) + 1));
	else if (s2 == NULL)
		string = malloc(sizeof(char) * (strlen(s1) + 1));
	else
		string = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; i <= strlen(string); i++)
	{
		if (s1 == NULL)
			str[i] = s2[i];
		else
		{
			str[i] = s1[i];
			if (s1[i] == '\0' && s2 != NULL)
			{
				for (j = 0; j < strlen(s2); j++)
				{
					str[i + j] = s2[j];
				}
				break;
			}
		}
	}
	return (string);
}
