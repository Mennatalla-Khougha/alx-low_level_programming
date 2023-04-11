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
	unsigned long int q;
	int i, j, k = 0, words = 0, word_len = 0;
	char **string;

	if (str == NULL)
		return (NULL);
	for (q = 0; q < strlen(str); q++)
	{
		if (str[q] != ' ')
		{
			words++;
			q += len(str + q) + 1;
		}
	}
	if (words == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (words));
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}
	for (i = 0; i < words; i++)
	{
		while (str[k] == ' ')
			k++;
		word_len = len(str + k);
		string[i] = malloc(sizeof(char) * (word_len));
		if (string[i] == NULL)
		{
			for (; i >= 0; i--)
				free(string[i]);
			free(string);
			return (NULL);
		}
		for (j = 0; j < word_len; j++)
			string[i][j] = str[k++];
		string[i][j] = '\0';
	}
	return (string);
}
