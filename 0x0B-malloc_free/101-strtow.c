#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * len - calculate the length of a word.
 * @str: the string.
 * Return: the length of a word.
 */

int len(char *str)
{
	int i = 0;

	while (str[i] != ' ' && str[i] != '\t')
	{
		i++;
	}
	return (i);
}

/**
 * strtow - splits a string into words.
 * @str: string to be splited.
 * Return: pointer to an array of strings, or NULL.
 */

char **strtow(char *str)
{
	int i, j, k = 0, words = 0, word_len = 0;
	char **string;

	if (str == NULL || str == "")
		return (NULL);
	for (j = 0; j < strlen(str); j++)
	{
		if (str[j] != '\t' && str[j] != ' ')
		{
			words++;
			j += len(str + j);
		}
	}
	if (words == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		while (str[k] == '\t' || str[k] == ' ')
			k++;
		word_len = len(str + k);
		string[i] = malloc(sizeof(char) * (word_len + 1));
		if (string[i] == NULL)
			return (NULL);
		for (j = 0; j < word_len; j++)
			string[i][j] = str[k++];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}
