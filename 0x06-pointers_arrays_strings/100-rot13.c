#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @str: string to encode.
 * Return: string.
 */

char *rot13(char *str)
{
	int i = 0;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int j;

	while (str[i] != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = code[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
