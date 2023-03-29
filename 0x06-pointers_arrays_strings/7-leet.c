#include "main.h"

/**
 * leet - encode a string into 1337.
 * @str: string.
 * Return: an encoded string.
 */

char *leet(char *str)
{
	int i = 0;
	char c[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int j;

	while (str[i] != 0)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c[j])
				str[i] = num[j];
		}
		i++;
	}
	return (str);
}
