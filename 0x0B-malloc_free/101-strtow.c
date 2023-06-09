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

	while (str[i] != ' ' && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * words - gives the number of words in a string
 * @str: string.
 * Return: number of words.
 */

int words(char *str)
{
	unsigned long int i;
	int word = 0;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ' && (i != 0 && str[i - 1] != ' '))
		{
			word++;
		}
	}
	if (str[i - 1] != ' ' && word != 0)
		word++;
	return (word);
}
/**
 * strtow - splits a string into words.
 * @str: string to be splited.
 * Return: pointer to an array of strings, or NULL.
 */

char **strtow(char *str)
{
	int i, j, k = 0, word = 0, word_len = 0, x;
	char **string;

	if (str == NULL)
		return (NULL);
	word = words(str);
	if (word == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < word; i++)
	{
		while (str[k] == ' ')
			k++;
		word_len = len(str + k);
		string[i] = malloc(sizeof(char) * (word_len + 1));
		if (string[i] == NULL)
		{
			for (x = 0; x <= i; x++)
			{
				free(string[i]);
			}
			free(string);
			return (NULL);
		}
		for (j = 0; j < word_len; j++)
			string[i][j] = str[k++];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}
